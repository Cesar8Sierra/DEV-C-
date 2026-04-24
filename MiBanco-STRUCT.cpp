#include <iostream>
#include <string.h>

using namespace std;

struct usuario{
	string nombre;
	string clave;
	int saldo;
	
}cnt[5];

int opc, cant=0;
string verificar;

int main () {
	inicio:
	system("cls");
	cout<<"***************************"<<endl;
	cout<<"***BIENVENIDO A MI BANCO***"<<endl;
	cout<<"***************************"<<endl;
	sleep(1);
	cout<<"*****INICIO DE SESION:*****"<<endl;
	cout<<"***************************"<<endl;
	cout<<"CANTIDAD DE CUENTAS TOTAL: "<<cant<<endl;
	cout<<"1. REGISTRO."<<endl;
	cout<<"2. INGRESO."<<endl;
	cout<<"3. CUENTAS."<<endl;
	cin>>opc;
	system("cls");
	switch(opc){
		case 1:
			cout<<"***REGISTRO***"<<endl;
			sleep(1);
			cout<<"INGRESE SUS DATOS:"<<endl;
			cout<<"NOMBRE: ";
			cin>>cnt[cant].nombre;
			cout<<"CLAVE: ";
			cin>>cnt[cant].clave;
			clave:
			cout<<"VERIFIQUE SU CLAVE: ";
			cin>>verificar;
			if(cnt[cant].clave == verificar){
				cout<<"CLAVE CORRECTA..."<<endl;
			} else{
				cout<<"CLAVE INCORRECTA..."<<endl;
				goto clave;
			}
			cout<<"REGISTRO EXITOSO..."<<endl;
			sleep(1);
			cant ++;
			goto inicio;
		case 2:
			cout<<"";
			goto inicio;
		case 3:
			cout<<"CUENTAS."<<endl;
			for(int j=0; j<cant; j++){
				cout<<"NOMBRE: "<<cnt[j].nombre<<endl;
			}
			sleep(2);
			goto inicio;
	}
}