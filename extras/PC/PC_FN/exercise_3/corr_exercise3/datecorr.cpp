#include <iostream>
#include <array>
#include <stdexcept>

using namespace std;

class Date {
    friend std::ostream& operator<<(std::ostream&, const Date&);
public:
    Date(int m = 1, int d = 1, int y = 1900);
    void setDate(int, int, int);
    Date& operator++();            // Prefix increment operator
    Date operator++(int);          // Postfix increment operator
    Date& operator+=(unsigned int); // Compound assignment operator
    static bool leapYear(int);
    bool endOfMonth(int) const;
private:
    unsigned int month;
    unsigned int day;
    unsigned int year;

    static const std::array<unsigned int, 13> days; // Days per month
    void helpIncrement(); // Utility function to increment date
};

const std::array<unsigned int, 13> Date::days{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

void Date::setDate(int mm, int dd, int yy) {
    if ((mm >= 1 && mm <= 12) && (yy >= 1900 && yy <= 2100) &&
        ((mm == 2 && leapYear(yy) && dd >= 1 && dd <= 29) ||
        (dd >= 1 && dd <= days[mm]))) {
        month = mm;
        year = yy;
        day = dd;
    }
    else {
        throw invalid_argument("Invalid argument");
    }
}

Date::Date(int month, int day, int year) {
    setDate(month, day, year);
}

bool Date::endOfMonth(int testDay) const {
    if (month == 2 && leapYear(year)) {
        return testDay == 29; // Last day of February in a leap year
    }
    else {
        return testDay == days[month];
    }
}

void Date::helpIncrement() {
    if (!endOfMonth(day)) {
        ++day; // Increment the day
    }
    else {
        if (month < 12) { // Last day of the month and month < 12
            ++month; // Increment the month
            day = 1; // First day of the new month
        }
        else { // Last day of the year
            ++year; // Increment the year
            month = 1; // First month of the new year
            day = 1; // First day of the new month
        }
    }
}

// Prefix increment operator
Date& Date::operator++() {
    helpIncrement();
    return *this;
}

// Postfix increment operator
Date Date::operator++(int) {
    Date temp = *this; // Hold current state
    helpIncrement();
    return temp; // Return previous state
}

// Compound assignment operator
Date& Date::operator+=(unsigned int additionalDays) {
    for (unsigned int i = 0; i < additionalDays; ++i) {
        helpIncrement();
    }
    return *this;
}

// Static function to check for leap year
bool Date::leapYear(int testYear) {
    if (testYear % 400 == 0 || (testYear % 100 != 0 && testYear % 4 == 0)) {
        return true;
    }
    return false;
}

// Overloaded stream insertion operator
std::ostream& operator<<(std::ostream& output, const Date& d) {
    static const char* months[] = { "", "January", "February", "March", "April", "May", "June", 
                                    "July", "August", "September", "October", "November", "December" };
    output << months[d.month] << ' ' << d.day << ", " << d.year;
    return output;
}

int main() {
    Date d1(12, 27, 2010); // December 27, 2010
    Date d2; // January 1, 1900

    cout << "d1 is " << d1 << "\nd2 is " << d2 << "\n\n";

    d1 += 7; // Add 7 days
    cout << "d1 += 7 is " << d1 << "\n\n";

    d2.setDate(2, 28, 2008); // February 28, 2008 (leap year)
    cout << "d2 is " << d2 << "\n";
    ++d2; // Increment to February 29, 2008
    cout << "++d2 is " << d2 << " (leap year allows 29th)\n\n";

    cout << "Testing the prefix increment operator:\n";
    Date d3(7, 13, 2010); // July 13, 2010
    cout << "d3 is " << d3 << "\n";
    cout << "++d3 is " << ++d3 << "\n";
    cout << "d3 is " << d3 << "\n\n";

    cout << "Testing the postfix increment operator:\n";
    cout << "d3 is " << d3 << "\n";
    cout << "d3++ is " << d3++ << "\n";
    cout << "d3 is " << d3 << "\n";

    return 0;
}