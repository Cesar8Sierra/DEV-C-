#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main () {
	string frase;
	ofstream archivo;
	string nombreArchivo="DOCENTE.txt";
	archivo.open(nombreArchivo.c_str(),ios::out);
	cout<<"INGRESE TEXTO PARA INGRESAR:"<<endl;
	cin.ignore();
	getline(cin, frase);
	archivo<<frase<<endl;
	archivo.close();
}

