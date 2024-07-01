/*Implemente una funcion que reciba un arreglo de cadenas y:
* Recorra el arreglo y convierta cada caracter en minuscula,
si el caracter no es una letra, debe reeemplazar dicho caracter
con el caracter '-', en caso de ser un caracter diferentes a letra
o numero debe ignorarlo*/
#include <iostream>
#include <vector>

using namespace std;

vector<string> procesarCadenas(vector<string> arr) {
    for (string &s : arr) {
        for (char &c : s) {
            if (c >= 'A' && c <= 'Z') {
                c = c - 'A' + 'a';
            } else if (c >= '0' && c <= '9') {
                c = '-';
            } else if (!(c >= 'a' && c <= 'z')) {
                c = ' ';
            }
        }
    }
    return arr;
}

int main() {
    vector<string> arr = {"Hola", "MUNDO123", "C++_Es_Genial!"};
    arr = procesarCadenas(arr);
    for (const string &s : arr) {
        cout << s << endl;
    }
    return 0;
}
/*#include <iostream>
#include <vector>

using namespace std;

string procesarCadena(string s) {
    for (char &c : s) {
        if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a';
        } else if (c >= '0' && c <= '9') {
            c = '-';
        } else if (!(c >= 'a' && c <= 'z')) {
            c = ' ';
        }
    }
    return s;
}

int main() {
    string s;
    cout << "Por favor, introduce una cadena: ";
    getline(cin, s);
    s = procesarCadena(s);
    cout << "La cadena procesada es: " << s << endl;
    return 0;
}
*/