/*(Palindromos) Un palindromo es una cadena que se escribe de la misma forma tanto al derecho como al
reves. Algunos ejemplos de palindromos son "radar, "reconocer" y (si se ignoran los espacios) "anita 
lava la tina". Escriba una funcion recursiva llamada probarPalindromo, que devuelva true si la cadena
alamcenada en el arreglo es un palindromo, y false en caso contrario. Cabe mencionar que, al igual que
un arreglo, es posible usar el operador de corchetes [] para iterar a traves de los caracteres en un
objeto string.*/
#include <iostream>
#include <string>

using namespace std;

// Eliminar caracteres no alfabéticos y convertir letras a minúsculas
string limpiarCadena(const string& cadena) {
    string limpia;
    for (char c : cadena) {
        if (isalpha(c)) {
            limpia += tolower(c);
        }
    }
    return limpia;
}

// Función recursiva para verificar si una cadena es un palíndromo
bool esPalindromo(const string& cadena) {
    // Obtener una versión limpia de la cadena
    string limpia = limpiarCadena(cadena);
    int inicio = 0; //inicializa dos indices inicio-fin
    int fin = limpia.size() - 1;

    // Caso base: cuando la subcadena tiene menos de dos caracteres
    if (inicio >= fin) {
        return true;
    }

    // Si los caracteres en los extremos no coinciden, no es un palíndromo
    if (limpia[inicio] != limpia[fin]) { //si los caracteres no coinciden
        return false;
    }

    // Llamada recursiva con los siguientes caracteres en la cadena
    return esPalindromo(limpia.substr(1, fin - 1)); //excluye los caracteres en los extremos 
                                                    //que ya se han comparado y verificado en 
                                                    //iteraciones anteriores.
}

int main() {
    
    string palindromo = "Anita lava la tina.";
    cout << "Cadena original: " << palindromo << endl;

    // Llamar a la función esPalindromo
    if (esPalindromo(palindromo)) {
        cout << "La cadena SI ES UN palindromo." << endl;
    } else {
        cout << "La cadena NO ES UN palindromo." << endl;
    }

   
    string noPalindromo = "Quiero veinte";
    cout << "Cadena original: " << noPalindromo << endl;

    // Llamar a la función esPalindromo
    if (esPalindromo(noPalindromo)) {
        cout << "La cadena SI ES UN palindromo." << endl;
    } else {
        cout << "La cadena NO ES UN palindromo." << endl;
    }

    return 0;
}