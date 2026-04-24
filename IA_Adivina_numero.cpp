#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL)); // Inicializar la semilla aleatoria con el tiempo actual
    int numeroUsuario;
    int minimo = 1, maximo = 100; // Rango de números
    int conjetura;
    int interaccion=0;
    char respuesta;

    cout << "Piensa en un numero entre 1 y 100. Yo intentare adivinarlo." << endl;

    do {
        conjetura = minimo + rand() % (maximo - minimo + 1);
        cout << "Es " << conjetura << " tu numero? (s: correcto, +: demasiado alto, -: demasiado bajo): ";
        cin >> respuesta;
		interaccion ++;
        if (respuesta == 's') {
            cout << "¡Adivine tu numero!" << endl;
        } else if (respuesta == '+') {
            maximo = conjetura - 1;
        } else if (respuesta == '-') {
            minimo = conjetura + 1;
        } else {
            cout << "Respuesta no valida. Por favor, ingresa s, + o -." << endl;
        }
    } while (respuesta != 's');
    
    cout<<"ACERTE TU NUMERO EN "<<interaccion<<" VECES."<<endl;
}
