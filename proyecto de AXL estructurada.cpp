#include <iostream>
#include <string>
#include<conio.h>

using namespace std;

struct Producto {
    string nombre;
    int stock;
    double precio;
};

struct Venta {
    string nombreProducto;
    int cantidad;
    double total;
};

// Declaración de productos
Producto productos[50] = {
    {"Martillo         ", 30, 12.5}, {"Desarmador       ", 25, 7.5},  {"Clavos           ", 100, 0.05}, {"Cemento          ", 50, 10.0},
    {"Lija             ", 40, 2.0},  {"Pintura          ", 20, 15.0}, {"Brocha           ", 35, 3.5},   {"Llave Inglesa    ", 15, 8.0},
    {"Taladro          ", 10, 65.0}, {"Sierra           ", 10, 45.0}, {"Metro            ", 50, 5.0},   {"Tornillos        ", 200, 0.1},
    {"Pegamento        ", 60, 4.5},  {"Escuadra         ", 30, 3.0},  {"Cinta Metrica    ", 20, 7.0},   {"Alicate          ", 25, 6.5},
    {"Mascarilla       ", 100, 1.5}, {"Guantes          ", 80, 2.0},  {"Soldador         ", 5, 50.0},   {"Amoladora        ", 7, 60.0},
    {"Nivel            ", 30, 12.0}, {"Esmeril          ", 12, 18.0}, {"Carretilla       ", 8, 40.0},   {"Regla            ", 50, 1.0},
    {"Pala             ", 20, 14.0}, {"Cemento Blanco   ", 25, 11.0}, {"Destornillador   ", 30, 7.5},   {"Tubo PVC         ", 50, 1.5},
    {"Alambre          ", 200, 0.2}, {"Pintura Roja     ", 15, 16.0}, {"Pintura Azul     ", 10, 15.5},  {"Cal              ", 60, 3.0},
    {"Silicona         ", 40, 2.5},  {"Espatula         ", 25, 3.5},  {"Martillo de Goma ", 18, 10.0},  {"Escalera         ", 5, 75.0},
    {"Caja Herramientas", 10, 45.0}, {"Pistola Pintar   ", 8, 55.0},  {"Manguera         ", 20, 15.0},
    {"Codo PVC         ", 100, 0.5}, {"Sandpaper        ", 80, 0.1},  {"Clavadora        ", 7, 50.0},   {"Perchero         ", 15, 8.5},
    {"Bisagra          ", 120, 1.0}, {"Candado          ", 35, 6.0},  {"Cinta Adhesiva   ", 50, 3.0},   {"Bisturi          ", 25, 4.0},
    {"Metro Laser      ", 5, 85.0},  {"Perforadora      ", 10, 20.0}, {"Guantes Cuero    ", 30, 5.5}
};

Venta ventas[100];
int numVentas = 0;

void mostrarProductos() {
    cout << "Productos disponibles:\n";
    for (int i = 0; i < 50; i++) {
        cout << "[" << i + 1 << "] " << productos[i].nombre<< " - Stock: " << productos[i].stock 
        << " - Precio: $" << productos[i].precio << endl;
    }
}

void comprarProducto() {
    int id, cantidad;
    mostrarProductos();
    cout << "Seleccione el numero del producto que desea comprar: ";
    cin >> id;
    id--;

    if (id < 0 || id >= 50) {
        cout << "opcion incorrecta.\n";
        getch();
        return;
    }

    cout << "Ingrese la cantidad que desea comprar: ";
    cin >> cantidad;

    if (cantidad <= 0 || cantidad > productos[id].stock) {
        cout << "sin stock suficientes.\n";
        return;
    }

    productos[id].stock -= cantidad;
    double total = cantidad * productos[id].precio;
    ventas[numVentas++] = {productos[id].nombre, cantidad, total};

    cout << "Compra realizada con exito. Total a pagar: $" << total << endl;
}

void mostrarVentas(bool ordenarPorPrecio = false, bool ascendente = true) {
    if (numVentas == 0) {
        cout << "No hay ventas registradas.\n";
        return;
    }

    // Copia local de ventas para ordenar
    Venta ventasOrdenadas[100];
    for (int i = 0; i < numVentas; i++) ventasOrdenadas[i] = ventas[i];

    // Ordenamiento de burbuja
    for (int i = 0; i < numVentas - 1; i++) {
        for (int j = 0; j < numVentas - i - 1; j++) {
            bool condicion = false;

            if (ordenarPorPrecio) {
                if (ascendente) {
                    condicion = ventasOrdenadas[j].total > ventasOrdenadas[j + 1].total;
                } else {
                    condicion = ventasOrdenadas[j].total < ventasOrdenadas[j + 1].total;
                }
            } else {
                condicion = (j < j + 1);
            }

            if (condicion) {
                Venta temp = ventasOrdenadas[j];
                ventasOrdenadas[j] = ventasOrdenadas[j + 1];
                ventasOrdenadas[j + 1] = temp;
            }
        }
    }

    cout << "Ventas registradas:\n";
    for (int i = 0; i < numVentas; i++) {
        cout << "Producto: " << ventasOrdenadas[i].nombreProducto << " - Cantidad: " 
             << ventasOrdenadas[i].cantidad << " - Total: $" << ventasOrdenadas[i].total << endl;
    }
}

void hacerRecibo() {
    if (numVentas == 0) {
        cout << "No hay ventas para generar recibo.\n";
        return;
    }

    double totalGeneral = 0;
    cout << "Recibo de ventas:\n";
    for (int i = 0; i < numVentas; i++) {
        cout << "Producto: " << ventas[i].nombreProducto << " - Cantidad: " 
             << ventas[i].cantidad << " - Total: $" << ventas[i].total << endl;
        totalGeneral += ventas[i].total;
    }
    cout << "Total a pagar: $" << totalGeneral << endl;
}

void mostrarMenu() {
    int opcion;
    do {
        cout << "\nMenu de opciones:\n";
        cout << "[1] Comprar\n";
        cout << "[2] Mostrar productos\n";
        cout << "[3] Hacer recibo\n";
        cout << "[4] Mostrar ventas\n";
        cout << "[0] Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                comprarProducto();
                getch();
                system("cls");
                break;
            case 2:
                mostrarProductos();
				getch();
                system("cls");
                break;
            case 3:
                hacerRecibo();
                getch();
                system("cls");
                break;
            case 4: {
                mostrarVentas();
                int opcionOrden;
                cout << "\nVer ventas ordenadas:\n";
                cout << "[1] Precio de menor a mayor\n";
                cout << "[2] Precio de mayor a menor\n";
                cout << "Seleccione una opcion: ";
                cin >> opcionOrden;
                getch();
                system("cls");
                if (opcionOrden == 1)
                    mostrarVentas(true, true);
                else if (opcionOrden == 2)
                    mostrarVentas(true, false);
                else
                    cout << "opcion incorrecta.\n";
                	getch();
                break;
            }
            case 0:
                cout << "saliendo...\n";
                sleep(2);
                break;
            default:
                cout << "opcion incorrecta.\n";
                getch();
        }
    } while (opcion != 0);
}

int main() {
    mostrarMenu();
    return 0;
}