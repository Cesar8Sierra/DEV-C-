#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main () {
	int opc1, opc2, opc3, opc4, opc5, opc6;
	string NomCnt[100], ContCnt[100], ConfCont, CntBus;
	int Sueldo[100], Retirar, Agregar;
	int i=0, j, k;
	
	cout<<"*****BIENVENIDO A MI BANCO*****"<<endl;
	cout<<"*******************************"<<endl;
	system("pause");
	system("cls");
	
	//MENU PRINCIPAL DE MI PROGRAMA
	menu_principal:
	cout<<"Total de cuentas: "<<i<<endl;
	cout<<"************************"<<endl;
	cout<<"*****MENU PRINCIPAL*****"<<endl;
	cout<<"************************"<<endl;
	cout<<"[1] CREAR CUENTA."<<endl;
	cout<<"[2] INICIAR SESION."<<endl;
	cout<<"[3] VISUALIZAR TODAS LAS CUENTAS."<<endl;
	cout<<"[4] SALIR."<<endl;
	cout<<"INGRESE UNA OPCION:"<<endl;
	cin>>opc1;
	system("cls");
	//PRIMER SWITCH CASE
	switch(opc1){
		case 1:
			i = i+1;
			menu_crear:
			cout<<"*****CREAR CUENTA*****"<<endl;
			cout<<"**********************"<<endl;
			cout<<"INGRESE EL NOMBRE DE USUARIO:"<<endl;
			cin>>NomCnt[i];
			//BUCLE PARA NO PERMITIR UN NOMBRE DE CUENTA SIMILAR A OTROS
			for(j=1; j<i; j++){
				while(NomCnt[j] == NomCnt[i]){
					cout<<"EL NOMBRE DE USUARIO YA EXISTE."<<endl;
					system("pause");
					system("cls");
					goto menu_crear;
				}	
			}
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
						break;
					case 2:
						i = i-1;
						system("cls");
						goto menu_principal;
					case 3:
						default:
						system("cls");
						cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
						system("pause");
						system("cls");
						cout<<"*********************************"<<endl;
						cout<<"[1] INTENTAR CLAVE NUEVAMENTE."<<endl;
						cout<<"[2] SALIR AL MENU."<<endl;
						cout<<"INGRESE NUEVAMENTE UNA OPCION:"<<endl;
						cin>>opc2;
				}
			}
			cout<<"CLAVE CONFIRMADA."<<endl;
			system("pause");
			system("cls");
			cout<<"*******************************"<<endl;
			cout<<"DESEA AGREGAR UN SALDO INICIAL:"<<endl;
			cout<<"*******************************"<<endl;
			cout<<"[1] AGREGAR SALDO."<<endl;
			cout<<"[2] TERMINAR SIN SALDO INICIAL."<<endl;
			cout<<"INGRESE UNA OPCION:"<<endl;
			cin>>opc3;
			switch(opc3){
				case 1:
					cout<<"***AGREGAR SALDO***"<<endl;
					cout<<"*******************"<<endl;
					cout<<"INGRESE EL SALDO A AGREGAR:"<<endl;
					cin>>Sueldo[i];
					cout<<"SALDO AGREGADO EXITOSAMENTE."<<endl;
					cout<<"****************************"<<endl;
					break;
				case 2:
					cout<<"TERMINAR CUENTA SIN SALDO"<<endl;
					cout<<"************************"<<endl;
					Sueldo[i] = 0;
					break;
				case 3:
					default:
					cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
					system("pause");
					system("cls");
					cout<<"*********************************"<<endl;
					cout<<"[1] AGREGAR SALDO."<<endl;
					cout<<"[2] TERMINAR SIN SALDO INICIAL."<<endl;
					cout<<"INGRESE UNA OPCION:"<<endl;
					cin>>opc3;
			}
			cout<<"CUENTA CREADA EXITOSAMENTE."<<endl;
			system("pause");
			system("cls");
			goto menu_principal;
		case 2:
			cout<<"*****INICIAR SESION*****"<<endl;
			ingresar_usuario:
			cout<<"************************"<<endl;
			cout<<"INGRESE EL NOMBRE DE USUARIO:"<<endl;
			cin>>CntBus;
			//solo acepta al ultimo usuario
			for(j=1; j=i; j++){
				if(NomCnt[j] == CntBus){
					cout<<"***USUARIO ENCONTRADO***"<<endl;
					cout<<"************************"<<endl;
					cout<<"NOMBRE DE USUARIO: "<<NomCnt[j]<<endl;
					cout<<"INGRESE SU CLAVE: ";
					cin>>ConfCont;
					while(ConfCont != ContCnt[j]){
						cout<<"CLAVE INCORRECTA."<<endl;
						cout<<"-----------------"<<endl;
						cout<<"INTENTE NUEVAMENTE"<<endl;
						cin>>ConfCont;
					}
					cout<<"CLAVE CORRECTA."<<endl;
					system("pause");
					system("cls");
					menu_usuario:
					cout<<"***MENU DE USUARIO***"<<endl;
					cout<<"*********************"<<endl;
					cout<<"[1] CONSULTAR SALDO"<<endl;
					cout<<"[2] RETIRAR SALDO"<<endl;
					cout<<"[3] AGREGAR SALDO"<<endl;
					cout<<"[4] SALIR AL MENU PRINCIPAL"<<endl;
					cout<<"INGRESE UNA OPCION:"<<endl;
					cin>>opc4;
					switch(opc4){
						case 1:
							cout<<"***CONSULTAR SALDO***"<<endl;
							cout<<"*********************"<<endl;
							cout<<"SALDO ACTUAL: "<<Sueldo[j]<<endl;
							cout<<"*********************"<<endl;
							system("pause");
							system("cls");
							goto menu_usuario;
						case 2:
							cout<<"***RETIRAR SALDO***"<<endl;
							error_cantidad:
							cout<<"*******************"<<endl;
							cout<<"INGRESE LA CANTIDAD A RETIRAR:"<<endl;
							cin>>Retirar;
							if(Retirar > Sueldo[j]){
								cout<<"NO CUENTA CON SALDO SUFICIENTE PARA RETIRAR."<<endl;
								cout<<"DESEA VOLVER AL MENU DEL USUARIO?:"<<endl;
								cout<<"[1] SI"<<endl;
								cout<<"[2] No"<<endl;
								cout<<"Ingrese una opcion"<<endl;
								cin>>opc5;
								switch(opc5){
									case 1:
										goto menu_usuario;
									case 2:
										goto error_cantidad;
									case 3:
										default:
										cout<<"VALOR INCORRECTO"<<endl;
										cout<<"DESEA VOLVER AL MENU DEL USUARIO?:"<<endl;
										cout<<"Ingrese una opcion"<<endl;
										cin>>opc5;
								}
							}
							Sueldo[j] = Sueldo[j] - Retirar;
							cout<<"CANTIDAD RETIRADA EXITOSAMENTE."<<endl;
							system("pause");
							system("cls");
							goto menu_usuario;
						case 3:
							cout<<"***AGREGAR SALDO***"<<endl;
							cout<<"*******************"<<endl;
							cout<<"INGRESE LA CANTIDAD A AGREGAR:"<<endl;
							cin>>Agregar;
							Sueldo[j] = Sueldo[j] + Agregar;
							cout<<"CANTIDAD AGREGADA EXITOSAMENTE."<<endl;
							system("pause");
							system("cls");
							goto menu_usuario;
						case 4:
							system("pause");
							system("cls");
							goto menu_principal;
						case 5:
							default:
							cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
							system("pause");
							system("cls");
							cout<<"*********************************"<<endl;
							cout<<"[1] CONSULTAR SALDO"<<endl;
							cout<<"[2] RETIRAR SALDO"<<endl;
							cout<<"[3] AGREGAR SALDO"<<endl;
							cout<<"[4] SALIR AL MENU PRINCIPAL"<<endl;
							cout<<"INGRESE UNA OPCION:"<<endl;
							cin>>opc4;
					}
				}
				//solo acepta al ultimo usuario
				if(NomCnt[i] != CntBus){
					cout<<"EL NOMBRE DE USUARIO INGRESADO NO EXISTE."<<endl;
					cout<<"*********************************"<<endl;
					cout<<"[1] INTENTAR NUEVAMENTE."<<endl;
					cout<<"[2] SALIR AL MENU PRINCIPAL."<<endl;
					cout<<"INGRESE UNA OPCION:"<<endl;
					cin>>opc6;
					switch(opc6){
					case 1:
						system("cls");
						goto ingresar_usuario;
					case 2:
						system("cls");
						goto menu_principal;
					case 3:
						default:
						system("cls");
						cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
						system("pause");
						system("cls");
						cout<<"*********************************"<<endl;
						cout<<"[1] INTENTAR NUEVAMENTE."<<endl;
						cout<<"[2] SALIR AL MENU PRINCIPAL."<<endl;
						cout<<"INGRESE UNA OPCION:"<<endl;
						cin>>opc6;
					}
				}
			}
			system("pause");
			system("cls");
			goto menu_principal;
		case 3:
			for(k=1; k<=i; k++){
				cout<<"NOMBRE DE CUENTA "<<k<<" -> |"<<NomCnt[k]<<"|"<<endl;
			}
			system("pause");
			system("cls");
			goto menu_principal;
		case 4:
			break;
		case 5:
			default:
				system("cls");
				cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
				cout<<"*********************************"<<endl;
				system("pause");
				system("cls");
				goto menu_principal;
	}
}
