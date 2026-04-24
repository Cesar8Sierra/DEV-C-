#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main () {
	int opc1, opc2;
	string NomCnt[100], ContCnt[100], ConfCont, CntBus;
	int i=0, j;
	menu_princ:
	cout<<"Valor de i: "<<i<<endl;
	cout<<"*****BIENVENIDO A MI BANCO*****"<<endl;
	cout<<"*******************************"<<endl;
	cout<<"*****MENU PRINCIPAL*****"<<endl;
	cout<<"************************"<<endl;
	cout<<"[1] CREAR CUENTA."<<endl;
	cout<<"[2] INICIAR SESION."<<endl;
	cout<<"[3] SALIR."<<endl;
	cout<<"INGRESE UNA OPCION:"<<endl;
	cin>>opc1;
	system("cls");
	
	switch(opc1){
		case 1:
			i = i+1;
			cout<<"*****CREAR CUENTA*****"<<endl;
			cout<<"**********************"<<endl;
			cout<<"INGRESE EL NOMBRE DE USUARIO:"<<endl;
			cin>>NomCnt[i];
			cout<<"INGRESE SU NUEVA CLAVE:"<<endl;
			cin>>ContCnt[i];
			system("cls");
			cout<<"CONFIRME SU CLAVE:"<<endl;
			cin>>ConfCont;
			while(ContCnt[i] != ConfCont){
				error_cont:
				system("cls");
				cout<<"***ERROR DE CLAVE***"<<endl;
				cout<<"********************"<<endl;
				cout<<"NO COINCIDEN LAS CLAVES."<<endl;
				cout<<"************************"<<endl;
				cout<<"[1] INTENTAR NUEVAMENTE."<<endl;
				cout<<"[2] SALIR AL MENU."<<endl;
				cout<<"INGRESE UNA OPCION:"<<endl;
				cin>>opc2;
				switch(opc2){
					case 1:
						cout<<"CONFIRME NUEVAMENTE SU CLAVE:"<<endl;
						cin>>ConfCont;
						if(ContCnt[i] != ConfCont){
							goto error_cont;
						}
						else{
							cout<<"CLAVE CONFIRMADA."<<endl;
							cout<<"CUENTA CREADA EXITOSAMENTE."<<endl;
							system("pause");
							system("cls");
						}
					case 2:
						i = i-1;
						system("cls");
						goto menu_princ;
					case 3:
						default:
						system("cls");
						cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
						cout<<"*********************************"<<endl;
						cout<<"[1] INTENTAR NUEVAMENTE."<<endl;
						cout<<"[2] SALIR AL MENU."<<endl;
						cout<<"INGRESE NUEVAMENTE UNA OPCION:"<<endl;
						cin>>opc2;
				}
				
			}
			cout<<"CLAVE CONFIRMADA."<<endl;
			cout<<"CUENTA CREADA EXITOSAMENTE."<<endl;
			system("pause");
			system("cls");
			goto menu_princ;
		case 2:
			j = 0;
			cout<<"*****INICIAR SESION*****"<<endl;
			cout<<"************************"<<endl;
			cout<<"INGRESE EL NOMBRE DE USUARIO:"<<endl;
			cin>>CntBus;
			for(NomCnt[j]; NomCnt[i]; j++){
				
			}
		case 3:
			break;
		case 4:
			default:
				system("cls");
				cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
				cout<<"*********************************"<<endl;
				system("pause");
				system("cls");
				goto menu_princ;
	}
}
