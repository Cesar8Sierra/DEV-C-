#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main () {
	int opc;
	int max = 100;
	string NomCnt[max], ContCnt[max], ConfCont, CntBus;
	int Sueldo[max], Retirar, Agregar, flag=0;
	int i=0;
	cout<<"*******************************"<<endl;
	cout<<"*****BIENVENIDO A MI BANCO*****"<<endl;
	cout<<"*******************************"<<endl;
	system("pause");
	//MENU PRINCIPAL DE MI PROGRAMA
	menu_principal:
	system("cls");
	cout<<"Total de cuentas: "<<i<<endl;
	cout<<"************************"<<endl;
	cout<<"*****MENU PRINCIPAL*****"<<endl;
	cout<<"************************"<<endl;
	cout<<"[1] CREAR CUENTA."<<endl;
	cout<<"[2] INICIAR SESION."<<endl;
	cout<<"[3] VISUALIZAR TODAS LAS CUENTAS."<<endl;
	cout<<"[4] SALIR."<<endl;
	cout<<"INGRESE UNA OPCION:"<<endl;
	if(!(cin>>opc)){
		system("cls");
		cout<<"**********************************"<<endl;
		cout<<"*LA OPCION INGRESADA NO ES VALIDA*"<<endl;
		cout<<"**********************************"<<endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		system("pause");
		goto menu_principal;
	}
	system("cls");
	// SWITCH PRINCIPAL
	switch(opc){
		case 1:
			menu_crear:
			cout<<"**********************"<<endl;
			cout<<"*****CREAR CUENTA*****"<<endl;
			cout<<"**********************"<<endl;
			cout<<"INGRESE EL NOMBRE DE USUARIO:"<<endl;
			cin>>NomCnt[i];
			//BUCLE PARA NO PERMITIR UN NOMBRE DE CUENTA SIMILAR A OTROS
			for(int j=0; j<i; j++){
				while(NomCnt[j] == NomCnt[i]){
					cout<<"EL NOMBRE DE USUARIO YA EXISTE."<<endl;
					system("pause");
					system("cls");
					goto menu_crear;
				}
			}
			cout<<"***********************"<<endl;
			cout<<"BIENVENIDO: "<<NomCnt[i]<<endl;
			cout<<"***********************"<<endl;
			cout<<"INGRESE SU NUEVA CLAVE:"<<endl;
			cin>>ContCnt[i];
			system("cls");
			cout<<"CONFIRME SU CLAVE:"<<endl;
			cin>>ConfCont;
			while(ContCnt[i] != ConfCont){
				error_cont:
				system("cls");
				cout<<"*************************"<<endl;
				cout<<"*NO COINCIDEN LAS CLAVES*"<<endl;
				cout<<"*************************"<<endl;
				cout<<"[1] INTENTAR NUEVAMENTE."<<endl;
				cout<<"[2] SALIR AL MENU."<<endl;
				cout<<"INGRESE UNA OPCION:"<<endl;
				cin>>opc;
				system("cls");
				// SWITCH CLAVE ERRONEA
				switch(opc){
					case 1:
						cout<<"CONFIRME NUEVAMENTE SU CLAVE:"<<endl;
						cin>>ConfCont;
						if(ContCnt[i] != ConfCont){
							goto error_cont;
						}
						break;
					case 2:
						goto menu_principal;
					case 3:
						default:
						cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
						system("pause");
						system("cls");
						goto error_cont;
				}
			}
			cout<<"CLAVE CONFIRMADA."<<endl;
			system("pause");
			system("cls");
			saldo_inicial:
			cout<<"********************************"<<endl;
			cout<<"*DESEA AGREGAR UN SALDO INICIAL:"<<endl;
			cout<<"********************************"<<endl;
			cout<<"[1] AGREGAR SALDO."<<endl;
			cout<<"[2] TERMINAR SIN SALDO INICIAL."<<endl;
			cout<<"INGRESE UNA OPCION:"<<endl;
			cin>>opc;
			system("cls");
			// SWITCH SALDO
			switch(opc){
				case 1:
					cout<<"*******************"<<endl;
					cout<<"***AGREGAR SALDO***"<<endl;
					cout<<"*******************"<<endl;
					cout<<"INGRESE EL SALDO A AGREGAR:"<<endl;
					cout<<"S/";
					cin>>Sueldo[i];
					cout<<"*****************************************"<<endl;
					cout<<"*S/"<<Sueldo[i]<<" AGREGADO EXITOSAMENTE*"<<endl;
					cout<<"*****************************************"<<endl;
					break;
				case 2:
					cout<<"****************************"<<endl;
					cout<<"*CUENTA TERMINADA SIN SALDO*"<<endl;
					cout<<"****************************"<<endl;
					Sueldo[i] = 0;
					break;
				case 3:
					default:
					cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
					system("pause");
					system("cls");
					goto saldo_inicial;
			} 
			i = i+1;
			cout<<"CUENTA CREADA EXITOSAMENTE."<<endl;
			system("pause");
			system("cls");
			goto menu_principal;
		case 2:
			ingresar_usuario:
			cout<<"************************"<<endl;
			cout<<"*****INICIAR SESION*****"<<endl;
			cout<<"************************"<<endl;
			cout<<"INGRESE EL NOMBRE DE USUARIO:"<<endl;
			cin>>CntBus;
			system("cls");
			for(int j=0; j<i && flag==0; j++){
				if(NomCnt[j] == CntBus){
					flag = 1;
					usuario_encontrado:
					cout<<"************************"<<endl;
					cout<<"***USUARIO ENCONTRADO***"<<endl;
					cout<<"************************"<<endl;
					cout<<"NOMBRE DE USUARIO: "<<NomCnt[j]<<endl;
					cout<<"INGRESE SU CLAVE: ";
					cin>>ConfCont;
					while(ConfCont != ContCnt[j]){
						error_cont2:
						cout<<"******************"<<endl;
						cout<<"*CLAVE INCORRECTA*"<<endl;
						cout<<"******************"<<endl;
						cout<<"[1] INTENTAR NUEVAMENTE."<<endl;
						cout<<"[2] SALIR AL MENU."<<endl;
						cout<<"INGRESE UNA OPCION:"<<endl;
						cin>>opc;
						system("cls");
						// SWITCH CLAVE ERRONEA
						switch(opc){
							case 1:
								goto usuario_encontrado;
							case 2:
								goto menu_principal;
							case 3:
								default:
								cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
								system("pause");
								system("cls");
								goto error_cont2;
						}
					}
					cout<<"CLAVE CORRECTA."<<endl;
					system("pause");
					system("cls");
					menu_usuario:
					cout<<"*********************"<<endl;
					cout<<"***MENU DE USUARIO***"<<endl;
					cout<<"*********************"<<endl;
					cout<<"[1] CONSULTAR SALDO"<<endl;
					cout<<"[2] RETIRAR SALDO"<<endl;
					cout<<"[3] AGREGAR SALDO"<<endl;
					cout<<"[4] CAMBIAR CLAVE"<<endl;
					cout<<"[5] SALIR AL MENU PRINCIPAL"<<endl;
					cout<<"INGRESE UNA OPCION:"<<endl;
					cin>>opc;
					system("cls");
					switch(opc){
						case 1:
							cout<<"*********************"<<endl;
							cout<<"***CONSULTAR SALDO***"<<endl;
							cout<<"*********************"<<endl;
							cout<<"SALDO ACTUAL: "<<"S/"<<Sueldo[j]<<endl;
							cout<<"*********************"<<endl;
							system("pause");
							system("cls");
							goto menu_usuario;
						case 2:
							error_cantidad:
							cout<<"*******************"<<endl;
							cout<<"***RETIRAR SALDO***"<<endl;
							cout<<"*******************"<<endl;
							cout<<"INGRESE LA CANTIDAD A RETIRAR:"<<endl;
							cout<<"S/";
							cin>>Retirar;
							if(Retirar > Sueldo[j]){
								cout<<"NO CUENTA CON SALDO SUFICIENTE PARA RETIRAR."<<endl;
								saldo_insuficiente:
								cout<<"DESEA VOLVER AL MENU DEL USUARIO?:"<<endl;
								cout<<"[1] SI"<<endl;
								cout<<"[2] No"<<endl;
								cout<<"INGRESE UNA OPCION:"<<endl;
								cin>>opc;
								switch(opc){
									case 1:
										system("cls");
										goto menu_usuario;
									case 2:
										system("cls");
										goto error_cantidad;
									case 3:
										default:
										cout<<"VALOR INCORRECTO"<<endl;
										goto saldo_insuficiente;
								}
							}
							Sueldo[j] = Sueldo[j] - Retirar;
							cout<<"CANTIDAD RETIRADA EXITOSAMENTE."<<endl;
							system("pause");
							system("cls");
							goto menu_usuario;
						case 3:
							cout<<"*******************"<<endl;
							cout<<"***AGREGAR SALDO***"<<endl;
							cout<<"*******************"<<endl;
							cout<<"INGRESE LA CANTIDAD A AGREGAR:"<<endl;
							cout<<"S/";
							cin>>Agregar;
							Sueldo[j] = Sueldo[j] + Agregar;
							cout<<"CANTIDAD AGREGADA EXITOSAMENTE."<<endl;
							system("pause");
							system("cls");
							goto menu_usuario;
						case 4:
							cambiar_clave:
							cout<<"*******************"<<endl;
							cout<<"***CAMBIAR CLAVE***"<<endl;
							cout<<"*******************************************"<<endl;
							cout<<"*POR SEGURIDAD INGRESE NUEVAMENTE SU CLAVE:"<<endl;
							cout<<"*******************************************"<<endl;
							cin>>ConfCont;
							while(ConfCont != ContCnt[j]){
								error_cont3:
								cout<<"******************"<<endl;
								cout<<"*CLAVE INCORRECTA*"<<endl;
								cout<<"******************"<<endl;
								cout<<"[1] INTENTAR NUEVAMENTE."<<endl;
								cout<<"[2] SALIR AL MENU DEL USUARIO."<<endl;
								cout<<"INGRESE UNA OPCION:"<<endl;
								cin>>opc;
								system("cls");
								// SWITCH CLAVE ERRONEA
								switch(opc){
									case 1:
										goto cambiar_clave;
									case 2:
										goto menu_usuario;
									case 3:
										default:
										cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
										system("pause");
										system("cls");
										goto error_cont3;
								}
							}
							cout<<"CLAVE CORRECTA."<<endl;
							system("pause");
							system("cls");
							cambio_clave:
							cout<<"INGRESE SU NUEVA CLAVE:"<<endl;
							cin>>ConfCont;
							if(ConfCont == ContCnt[j]){
								clave_igual:
								cout<<"LA CLAVE ES IGUAL A LA ANTERIOR"<<endl;
								cout<<"[1] INTENTAR NUEVAMENTE."<<endl;
								cout<<"[2] CONSERVAR CLAVE."<<endl;
								cout<<"INGRESE UNA OPCION:"<<endl;
								cin>>opc;
								system("cls");
								switch(opc){
									case 1:
										goto cambio_clave;
									case 2:
										break;
									case 3:
										default:
										cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
										system("pause");
										system("cls");
										goto clave_igual;
								}
							}else{
								ContCnt[j] = ConfCont;
							}
							cout<<"CLAVE GUARDADA CORRECTAMENTE."<<endl;
							system("pause");
							system("cls");
							goto menu_usuario;
						case 5:
							cout<<"CERRANDO SESION..."<<endl;
							flag = 0;
							system("pause");
							system("cls");
							goto menu_principal;
						case 6:
							default:
							cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
							system("pause");
							system("cls");
							goto menu_usuario;
					}
				}
			}
			if(flag ==0){
				error_nombre:
				cout<<"******************************************"<<endl;
				cout<<"*EL NOMBRE DE USUARIO INGRESADO NO EXISTE*"<<endl;
				cout<<"******************************************"<<endl;
				cout<<"[1] INTENTAR NUEVAMENTE."<<endl;
				cout<<"[2] SALIR AL MENU PRINCIPAL."<<endl;
				cout<<"INGRESE UNA OPCION:"<<endl;
				cin>>opc;
				system("cls");
				switch(opc){
					case 1:
						goto ingresar_usuario;
					case 2:
						goto menu_principal;
					case 3:
						default:
						cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
						system("pause");
						goto error_nombre;
				}
			}
			break;
		case 3:
			cout<<"**************************************"<<endl;
			cout<<"*****VISUALIZAR TODAS LAS CUENTAS*****"<<endl;
			cout<<"**************************************"<<endl;
			for(int k=0; k<i; k++){
				cout<<"*NOMBRE DE CUENTA "<<k+1<<" -> |"<<NomCnt[k]<<"|"<<endl;
			}
			system("pause");
			goto menu_principal;
		case 4:
			cout<<"**********************************"<<endl;
			cout<<"***GRACIAS POR USAR MI PROYECTO***"<<endl;
			cout<<"***************CESJ***************"<<endl;
			cout<<"**********************************"<<endl;
			
			break;
		case 5:
			default:
				system("cls");
				cout<<"**********************************"<<endl;
				cout<<"*LA OPCION INGRESADA NO ES VALIDA*"<<endl;
				cout<<"**********************************"<<endl;
				system("pause");
				goto menu_principal;
	}
}
