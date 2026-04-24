#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

using namespace std;

void escribirEnArchivo(); // Nueva función
void emitir_factura();    // Modificada para incluir escritura en archivo
void menu();

// Variables globales
int num_boleto;
int opc, costo_total = 0;
string nom_pasajero;

int NUM_DESTINOS = 10;
string destinos[] = {"Egipto", "Francia", "Tailandia", "Suiza", "Brasil", "Italia", "Japon", "Corea del Sur", "Mexico", "Rusia"};
float precios[] = {300, 320.50, 500, 320, 450, 400, 415, 399.90, 129, 400.90};

struct Boleto {
    int boletos;
    string destino;
    float precio;
    string clase;
};

struct Usuario {
    string nombre;
    string sexo;
    int edad;
    int dni;
    struct Boleto Bo;
} Usu[8];

int main() {
    menu();
}

void emitir_factura() {
    ofstream archivo; 
    string nombreArchivo;

    // Pedir el nombre del archivo para guardar los datos
    cout << "Digite el nombre del archivo para guardar la factura (ejemplo: factura.txt): ";
    cin.ignore();
    getline(cin, nombreArchivo);

    archivo.open(nombreArchivo.c_str(), ios::out);
    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        return;
    }

    // Generar factura y escribir en el archivo
    archivo << "FACTURA - EMPRESA LATAM" << endl;
    archivo << "********" << endl;

    costo_total = 0;

    for (int i = 0; i < 8; i++) {
        if (Usu[i].Bo.boletos == 1) {
            float impuesto_pasajero = 0.18 * Usu[i].Bo.precio;
            float total_pasajero = Usu[i].Bo.precio + impuesto_pasajero;

            archivo << "\nPASAJERO Nro." << i + 1 << endl;
            archivo << "Nombre: " << Usu[i].nombre << endl;
            archivo << "Destino: " << Usu[i].Bo.destino << endl;
            archivo << "Clase: " << Usu[i].Bo.clase << endl;
            archivo << "Precio: S/." << Usu[i].Bo.precio << endl;
            archivo << "IMPUESTO (18%): S/." << impuesto_pasajero << endl;
            archivo << "TOTAL A PAGAR: S/." << total_pasajero << endl;

            costo_total += Usu[i].Bo.precio;
        }
    }

    float impuesto_total = 0.18 * costo_total;
    float total_con_impuesto = costo_total + impuesto_total;

    archivo << "\t**********" << endl;
    archivo << "TOTAL A PAGAR -> SIN IMPUESTOS: S/." << costo_total << endl;
    archivo << "IMPUESTO TOTAL (18%): S/." << impuesto_total << endl;
    archivo << "TOTAL CON IMPUESTO: S/." << total_con_impuesto << endl;

    archivo.close();
    cout << "Factura generada correctamente en el archivo: " << nombreArchivo << endl;
}

void menu() {
    cout << "BIENVENIDOS A LA EMPRESA DE VUELOS LATAM:" << endl;
    cout << "***********" << endl;
    cout << "1.- EMITIR FACTURA Y GUARDAR EN ARCHIVO" << endl;
    cout << "2.- SALIR" << endl;
    cout << "ELEGIR OPCION: ";
    cin >> opc;

    switch (opc) {
        case 1:
            emitir_factura();
            break;
        case 2:
            exit(0);
        default:
            cout << "Opcion invalida. Intente nuevamente." << endl;
    }

    system("pause");
    system("cls");
    menu();
}
