/*(Ocho reinas) Otro enigma para los entusiastas del ajedrez es el problema de las Ocho reinas, el cual
pregunta lo siguiente ¿es posible colocar en un tablero de ajedrez vacio, de tal manera que niguna
reina "ataque" a cualquier otra (es decir, que no haya dos reinas en la misma fila, en la misma columna
o a lo largo de la misma diagonal)? Use la idea desarrollada en el ejercicio 7.22 para formular una heuristica
y resolver el problema de las Ocho reinas. Ejecute su programa [Sugerencia: es posible asignar un valor a cada
una de las posiciones en el tablero del ajedrez, para indicar cuá´ntas posiciones de un tablero vacío se "eliminan"
si una reina se coloca en esa posicion. A cada una de las esquinas se le asignaria el valor 22, como se demuestra 
en la figura 7.28. Una vez que]*/
#include <iostream>
#include <array> //--> Trabajar con matrices estáticas
#include <random> //--> Generar numeros aleatorios
#include <ctime> //--> Trabajar con el tiempo

using namespace std;
//La funcion verifica si es seguro colocar una reina en la posicion (fila, columna) en el tablero. Compruebe
//si la columna, la diagonal ascendente o descendente estan libres de otras reinas. Retorna true "si" es seguro 
//y false caso contrario
bool esSeguro(const array<int, 8>& tablero, int fila, int columna) {
    for (int i = 0; i < fila; ++i) { /*Itera a través de las filas ya ocupadas y verifica si la reina actual 
                                    en la fila i está en la misma columna o en la misma diagonal 
                                    que la reina que se intenta colocar.*/
        if (tablero[i] == columna || 
            tablero[i] - i == columna - fila || 
            tablero[i] + i == columna + fila) {
            return false;
        }
    }
    return true;
}

//Intenta colocar las reinas en el tablero. Itera a traves de cada fila del tablero y selecciona aleatoriamente
//una columna.Luego, intenta mover a la reina a una columna mas segura en la misma fila, hasta que encuentra una
//posicion mas segura.
void resolverReinasHeuristico(array<int, 8>& tablero) {
    // Inicializar generador de números aleatorios
    default_random_engine generator(time(NULL));
    // Crear distribución uniforme para seleccionar posiciones aleatorias
    uniform_int_distribution<int> distribution(0, 7);

    for (int fila = 0; fila < 8; ++fila) {
        // Inicializar la columna actual con una posición aleatoria
        int columna = distribution(generator);
        // Intentar mover la reina a una posición más segura en la misma fila
        for (int intento = 0; intento < 8; ++intento) {
            if (esSeguro(tablero, fila, columna)) {
                tablero[fila] = columna;
                break;
            }
            // Si la posición no es segura, intentar con la siguiente columna
            columna = (columna + 1) % 8;
        }
    }
}

int main() {
    array<int, 8> tablero = {0};
    resolverReinasHeuristico(tablero);

    // Imprimir el tablero con las posiciones de las reinas
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (tablero[i] == j) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}