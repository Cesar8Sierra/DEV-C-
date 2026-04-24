#include <iostream>
#include <cstdlib>
#include <string>
#include <thread> // Para std::this_thread::sleep_for
#include <chrono> // Para std::chrono::seconds

using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        system("cls"); // Limpia la pantalla

        // Agrega espacios antes del autobús
        string spaces(i * 5, ' '); // Cambia 5 por el número de espacios que quieras agregar por iteración

        cout << spaces << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << spaces << " " << endl;
        cout << spaces << " --------------- " << endl;
        cout << spaces << " |__|__|__|__|__|__ " << endl;
        cout << spaces << " |      METRO      | " << endl;
        cout << spaces << " |----O----------O-|" << endl;
        cout << spaces << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;

        std::this_thread::sleep_for(std::chrono::seconds(1)); // Espera 1 segundo antes de la próxima iteración
    }

    return 0;
}
