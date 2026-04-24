#include <iostream>
#include <string>
#include <limits>

// PROYECTO DE CESAR EMERSON SIERRA JACINTO / ALGORITMOS Y PROGRAMACION / ISI / 2024-1

using namespace std;

int main () {
	int opc, max=100, flag=0, i=0, h=0, v, w;
	string Correo[max], Telef[max], Nombre[max], Clave[max], ConfCont, CntBus, CCI[max], HistCnt[max][max];
	int Sueldo[max], HistSld[max][max], Retirar, Agregar, Transf;
	
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
			cout<<"**********************"<<endl;
			cout<<"*****CREAR CUENTA*****"<<endl;
			cout<<"**********************"<<endl;
			correo:
			cout<<"CORREO ELECTRONICO:"<<endl;
			cin>>Correo[i];
			for(int j=0; j<i; j++){
				while(Correo[j] == Correo[i]){
					cout<<"EL CORREO ELECTRONICO YA FUE REGISTRADO EN OTRA CUENTA."<<endl;
					system("pause");
					system("cls");
					goto correo;
				}
			}
			telef:
			cout<<"NUMERO DE CELULAR:"<<endl;
			cin>>Telef[i];
			for(int j=0; j<i; j++){
				while(Telef[j] == Telef[i]){
					cout<<"EL NUMERO DE CELULAR YA FUE REGISTRADO EN OTRA CUENTA."<<endl;
					system("pause");
					system("cls");
					goto telef;
				}
			}
			nombre:
			cout<<"NOMBRE DE USUARIO:"<<endl;
			cin>>Nombre[i];
			for(int j=0; j<i; j++){
				while(Nombre[j] == Nombre[i]){
					cout<<"EL NOMBRE DE USUARIO YA FUE REGISTRADO EN OTRA CUENTA."<<endl;
					system("pause");
					system("cls");
					goto nombre;
				}
			}
			cout<<"***********************"<<endl;
			cout<<"BIENVENIDO: "<<Nombre[i]<<endl;
			cout<<"***********************"<<endl;
			cout<<"INGRESE SU NUEVA CLAVE:"<<endl;
			cin>>Clave[i];
			system("cls");
			cout<<"CONFIRME SU CLAVE:"<<endl;
			cin>>ConfCont;
			while(Clave[i] != ConfCont){
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
						if(Clave[i] != ConfCont){
							system("pause");
							goto error_cont;
						}
						break;
					case 2:
						goto menu_principal;
					case 3:
						default:
						cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
						system("pause");
						goto error_cont;
				}
			}
			cout<<"CLAVE CONFIRMADA."<<endl;
			system("pause");
			saldo_inicial:
			system("cls");
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
					cin>>Agregar;
					Sueldo[i]= Sueldo[i] + Agregar;
					cout<<"*******************************"<<endl;
					cout<<"*S/"<<Sueldo[i]<<" AGREGADO EXITOSAMENTE*"<<endl;
					cout<<"*******************************"<<endl;
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
					goto saldo_inicial;
			}
			CCI[i] = Telef[i] + Telef[i];
			cout<<"CUENTA CREADA EXITOSAMENTE."<<endl;
			system("pause");
			system("cls");
			cout<<"MOSTRANDO DATOS DE LA CUENTA:"<<endl;
			cout<<"- CORREO ELECTRONICO:	"<<Correo[i]<<endl;
			cout<<"- NUMERO DE CELULAR: 	"<<Telef[i]<<endl;
			cout<<"- NOMBRE DE USUARIO: 	"<<Nombre[i]<<endl;
			cout<<"- CCI DE LA CUENTA:  	"<<CCI[i]<<endl;
			system("pause");
			i = i+1;
			goto menu_principal;
		case 2:
			ingresar_usuario:
			system("cls");
			cout<<"************************"<<endl;
			cout<<"*****INICIAR SESION*****"<<endl;
			cout<<"************************"<<endl;
			cout<<"[1] CORREO ELECTRONICO."<<endl;
			cout<<"[2] NUMERO DE TELEFONO."<<endl;
			cout<<"[3] NOMBRE DE USUARIO."<<endl;
			cout<<"INGRESE UN METODO:"<<endl;
			cin>>opc;
			system("cls");
			flag = 0;
			switch (opc){
				case 1:
					cout<<"INGRESE EL CORREO ELECTRONICO:"<<endl;
					cin>>CntBus;
					system("cls");
					for(int j=0; j<i && flag==0; j++){
						if(Correo[j] == CntBus){
							v = j;
							flag = 1;
							cout<<"***********************"<<endl;
							cout<<"***CORREO ENCONTRADO***"<<endl;
							cout<<"***********************"<<endl;
							cout<<"NOMBRE DE USUARIO: "<<Nombre[j]<<endl;
						}
					}
					if(flag == 0){
						cout<<"***********************"<<endl;
						cout<<"***CORREO NO ENCONTRADO***"<<endl;
						cout<<"***********************"<<endl;
						system("pause");
						goto ingresar_usuario;
					}
					break;
				case 2:
					cout<<"INGRESE EL NUMERO DE TELEFONO:"<<endl;
					cin>>CntBus;
					system("cls");
					for(int j=0; j<i && flag==0; j++){
						if(Telef[j] == CntBus){
							v = j;
							flag = 1;
							cout<<"***********************"<<endl;
							cout<<"***NUMERO ENCONTRADO***"<<endl;
							cout<<"***********************"<<endl;
							cout<<"NOMBRE DE USUARIO: "<<Nombre[j]<<endl;
						}
					}
					if(flag == 0){
						cout<<"***********************"<<endl;
						cout<<"***NUMERO NO ENCONTRADO***"<<endl;
						cout<<"***********************"<<endl;
						system("pause");
						goto ingresar_usuario;
					}
					break;
				case 3:
					cout<<"INGRESE EL NOMBRE DE USUARIO:"<<endl;
					cin>>CntBus;
					system("cls");
					for(int j=0; j<i && flag==0; j++){
						if(Nombre[j] == CntBus){
							v = j;
							flag = 1;
							cout<<"************************"<<endl;
							cout<<"***NOMBRE ENCONTRADO***"<<endl;
							cout<<"************************"<<endl;
							cout<<"NOMBRE DE USUARIO: "<<Nombre[j]<<endl;
						}
					}
					if(flag == 0){
							cout<<"***********************"<<endl;
							cout<<"***NOMBRE NO ENCONTRADO***"<<endl;
							cout<<"***********************"<<endl;
							system("pause");
							goto ingresar_usuario;
					}
					break;
				case 4:
					default:
						cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
						system("pause");
						goto ingresar_usuario;
			}
			clave:
			cout<<"INGRESE SU CLAVE: ";
			cin>>ConfCont;
			while(ConfCont != Clave[v]){
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
						goto clave;
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
			menu_usuario:
			system("cls");
			cout<<"*********************"<<endl;
			cout<<"***MENU DE USUARIO***"<<endl;
			cout<<"*********************"<<endl;
			cout<<"[1] CONSULTAR SALDO\t\t";
			cout<<"[2] RETIRAR SALDO"<<endl;
			cout<<"[3] AGREGAR SALDO  \t\t";
			cout<<"[4] TRANSFERIR"<<endl;
			cout<<"[5] PAGAR SERVICIOS\t\t";
			cout<<"[6] YAPE"<<endl;
			cout<<"[7] AJUSTES        \t\t";
			cout<<"[8] VER HISTORIAL"<<endl;
			cout<<"[9] SALIR AL MENU PRINCIPAL"<<endl;
			cout<<"INGRESE UNA OPCION:"<<endl;
			cin>>opc;
			system("cls");
			switch(opc){
				case 1:
					cout<<"*********************"<<endl;
					cout<<"***CONSULTAR SALDO***"<<endl;
					cout<<"*********************"<<endl;
					cout<<"SALDO ACTUAL: "<<"S/"<<Sueldo[v]<<endl;
					cout<<"*********************"<<endl;
					system("pause");
					goto menu_usuario;
				case 2:
					error_cantidad:
					system("cls");
					cout<<"*******************"<<endl;
					cout<<"***RETIRAR SALDO***"<<endl;
					cout<<"******************************"<<endl;
					cout<<"INGRESE LA CANTIDAD A RETIRAR:"<<endl;
					cout<<"S/";
					cin>>Retirar;
					if(Retirar > Sueldo[v]){
						cout<<"NO CUENTA CON SALDO SUFICIENTE PARA RETIRAR."<<endl;
						system("pause");
						saldo_insuficiente:
						system("cls");
						cout<<"DESEA VOLVER AL MENU DEL USUARIO?:"<<endl;
						cout<<"[1] SI"<<endl;
						cout<<"[2] No"<<endl;
						cout<<"INGRESE UNA OPCION:"<<endl;
						cin>>opc;
						switch(opc){
							case 1:
								goto menu_usuario;
							case 2:
								goto error_cantidad;
							case 3:
								default:
								cout<<"VALOR INCORRECTO"<<endl;
								system("pause");
								goto saldo_insuficiente;
							}
						}
					Sueldo[v] = Sueldo[v] - Retirar;
					cout<<"CANTIDAD RETIRADA EXITOSAMENTE."<<endl;
					h++;
					HistCnt[v][h]="SALDO RETIRADO EXITOSAMENTE--> - S/.";
					HistSld[v][h]= Retirar;
					system("pause");
					goto menu_usuario;
				case 3:
					cout<<"*******************"<<endl;
					cout<<"***AGREGAR SALDO***"<<endl;
					cout<<"******************************"<<endl;
					cout<<"INGRESE LA CANTIDAD A AGREGAR:"<<endl;
					cout<<"S/";
					cin>>Agregar;
					Sueldo[v] = Sueldo[v] + Agregar;
					cout<<"CANTIDAD AGREGADA EXITOSAMENTE."<<endl;
					h++;
					HistCnt[v][h]="SALDO AGREGADO EXITOSAMENTE--> + S/.";
					HistSld[v][h]= Agregar;
					system("pause");
					goto menu_usuario;
				case 4:
					cci:
					system("cls");
					cout<<"********************"<<endl;
					cout<<"***TRANSFERENCIAS***"<<endl;
					cout<<"***************************************"<<endl;
					cout<<"INGRESE EL CCI DE LA CUENTA DE DESTINO:"<<endl;
					cout<<"CCI: ";
					cin>>CntBus;
					flag = 0;
					for(int j=0; j<i && flag==0; j++){
						if(CCI[j] == CntBus){
							w = j;
							flag = 1;
							system("cls");
							cout<<"********************"<<endl;
							cout<<"***CCI ENCONTRADO***"<<endl;
							cout<<"********************"<<endl;
							cout<<"NOMBRE DEL BENEFICIARIO: "<<Nombre[j]<<endl;
							system("pause");
						}
					}
					if(flag == 0){
							system("cls");
							cout<<"***********************"<<endl;
							cout<<"***CCI NO ENCONTRADO***"<<endl;
							cout<<"***********************"<<endl;
							cout<<"DESEA INTENTAR NUEVAMENTE?"<<endl;
							cout<<"1. SI"<<endl;
							cout<<"2. NO"<<endl;
							cin>>opc;
							if(opc == 1){
								goto cci;
							} else if (opc == 2){
								goto menu_usuario;
							}
					}
					transf:
					system("cls");
					cout<<"INGRESE LA CANTIDAD DE TRANSFERENCIA:"<<endl;
					cout<<"S/";
					cin>>Retirar;
					if(Retirar > Sueldo[v]){
						cout<<"NO CUENTA CON SALDO SUFICIENTE PARA TRANSFERIR."<<endl;
						system("pause");
						sin_saldo:
						system("cls");
						cout<<"DESEA VOLVER AL MENU DEL USUARIO?:"<<endl;
						cout<<"[1] SI"<<endl;
						cout<<"[2] No"<<endl;
						cout<<"INGRESE UNA OPCION:"<<endl;
						cin>>opc;
						switch(opc){
							case 1:
								goto menu_usuario;
							case 2:
								goto transf;
							case 3:
								default:
								cout<<"VALOR INCORRECTO"<<endl;
								system("pause");
								goto sin_saldo;
						}
					}
					Sueldo[v] = Sueldo[v] - Retirar;
					Sueldo[w] = Sueldo[w] + Retirar;
					cout<<"CANTIDAD TRANSFERIDA EXITOSAMENTE."<<endl;
					h++;
					HistCnt[v][h]="TRANSFERENCIA ENVIADA EXITOSAMENTE--> - S/.";
					HistSld[v][h]= Retirar;
					HistCnt[w][h]="TRANSFERENCIA RECIBIDA EXITOSAMENTE--> + S/.";
					HistSld[w][h]= Retirar;
					system("pause");
					goto menu_usuario;
				case 5:
					menu_servicios:
					system("cls");
					cout<<"*********************"<<endl;
					cout<<"***PAGAR SERVICIOS***"<<endl;
					cout<<"*********************"<<endl;
					cout<<"[1] INTERNET"<<endl;
					cout<<"[2] TELEFONO"<<endl;
					cout<<"[3] AGUA"<<endl;
					cout<<"[4] DIRECTV"<<endl;
					cout<<"[5] VOLVER AL MENU"<<endl;
					cout<<"INGRESE UNA OPCION:"<<endl;
					cin>>opc;
					system("cls");
					switch(opc){
						case 1:
							internet:
							system("cls");
							cout<<"**************"<<endl;
							cout<<"***INTERNET***"<<endl;
							cout<<"****************************"<<endl;
							cout<<"INGRESE LA CANTIDAD A PAGAR:"<<endl;
							cout<<"S/";
							cin>>Retirar;
							if(Retirar > Sueldo[v]){
								cout<<"NO CUENTA CON SALDO SUFICIENTE PARA PAGAR EL SERVICIO"<<endl;
								system("pause");
								sin_saldo2:
								system("cls");
								cout<<"DESEA VOLVER AL MENU DE SERVICIOS?:"<<endl;
								cout<<"[1] SI"<<endl;
								cout<<"[2] No"<<endl;
								cout<<"INGRESE UNA OPCION:"<<endl;
								cin>>opc;
								switch(opc){
									case 1:
										goto menu_servicios;
									case 2:
										goto internet;
									case 3:
										default:
										cout<<"VALOR INCORRECTO"<<endl;
										system("pause");
										goto sin_saldo2;
								}
							}
							Sueldo[v] = Sueldo[v] - Retirar;
							cout<<"SERVICIO DE INTERNET PAGADO EXITOSAMENTE."<<endl;
							h++;
							HistCnt[v][h]="SERVICIO DE INTERNET PAGADO EXITOSAMENTE--> - S/.";
							HistSld[v][h]= Retirar;
							system("pause");
							goto menu_usuario;
						case 2:
							linea:
							system("cls");
							cout<<"**************"<<endl;
							cout<<"***TELEFONO***"<<endl;
							cout<<"****************************"<<endl;
							cout<<"INGRESE LA CANTIDAD A PAGAR:"<<endl;
							cout<<"S/";
							cin>>Retirar;
							if(Retirar > Sueldo[v]){
								cout<<"NO CUENTA CON SALDO SUFICIENTE PARA PAGAR EL SERVICIO"<<endl;
								system("pause");
								sin_saldo3:
								system("cls");
								cout<<"DESEA VOLVER AL MENU DE SERVICIOS?:"<<endl;
								cout<<"[1] SI"<<endl;
								cout<<"[2] No"<<endl;
								cout<<"INGRESE UNA OPCION:"<<endl;
								cin>>opc;
								switch(opc){
									case 1:
										goto menu_servicios;
									case 2:
										goto linea;
									case 3:
										default:
										cout<<"VALOR INCORRECTO"<<endl;
										system("pause");
										goto sin_saldo3;
								}
							}
							Sueldo[v] = Sueldo[v] - Retirar;
							cout<<"SERVICIO DE TELEFONO PAGADO EXITOSAMENTE."<<endl;
							h++;
							HistCnt[v][h]="SERVICIO DE TELEFONO PAGADO EXITOSAMENTE--> - S/.";
							HistSld[v][h]= Retirar;
							system("pause");
							goto menu_usuario;
						case 3:
							agua:
							system("cls");
							cout<<"**********"<<endl;
							cout<<"***AGUA***"<<endl;
							cout<<"****************************"<<endl;
							cout<<"INGRESE LA CANTIDAD A PAGAR:"<<endl;
							cout<<"S/";
							cin>>Retirar;
							if(Retirar > Sueldo[v]){
								cout<<"NO CUENTA CON SALDO SUFICIENTE PARA PAGAR EL SERVICIO"<<endl;
								system("pause");
								sin_saldo4:
								system("cls");
								cout<<"DESEA VOLVER AL MENU DE SERVICIOS?:"<<endl;
								cout<<"[1] SI"<<endl;
								cout<<"[2] No"<<endl;
								cout<<"INGRESE UNA OPCION:"<<endl;
								cin>>opc;
								switch(opc){
									case 1:
										goto menu_servicios;
									case 2:
										goto agua;
									case 3:
										default:
										cout<<"VALOR INCORRECTO"<<endl;
										system("pause");
										goto sin_saldo4;
								}
							}
							Sueldo[v] = Sueldo[v] - Retirar;
							cout<<"SERVICIO DE AGUA PAGADO EXITOSAMENTE."<<endl;
							h++;
							HistCnt[v][h]="SERVICIO DE PAGADO EXITOSAMENTE--> - S/.";
							HistSld[v][h]= Retirar;
							system("pause");
							goto menu_usuario;
						case 4:
							directv:
							system("cls");
							cout<<"*************"<<endl;
							cout<<"***DIRECTV***"<<endl;
							cout<<"****************************"<<endl;
							cout<<"INGRESE LA CANTIDAD A PAGAR:"<<endl;
							cout<<"S/";
							cin>>Retirar;
							if(Retirar > Sueldo[v]){
								cout<<"NO CUENTA CON SALDO SUFICIENTE PARA PAGAR EL SERVICIO"<<endl;
								system("pause");
								sin_saldo5:
								system("cls");
								cout<<"DESEA VOLVER AL MENU DE SERVICIOS?:"<<endl;
								cout<<"[1] SI"<<endl;
								cout<<"[2] No"<<endl;
								cout<<"INGRESE UNA OPCION:"<<endl;
								cin>>opc;
								switch(opc){
									case 1:
										goto menu_servicios;
									case 2:
										goto directv;
									case 3:
										default:
										cout<<"VALOR INCORRECTO"<<endl;
										system("pause");
										goto sin_saldo5;
								}
							}
							Sueldo[v] = Sueldo[v] - Retirar;
							cout<<"SERVICIO DE DIRECTV PAGADO EXITOSAMENTE."<<endl;
							h++;
							HistCnt[v][h]="SERVICIO DE DIRECTV PAGADO EXITOSAMENTE--> - S/.";
							HistSld[v][h]= Retirar;
							system("pause");
							goto menu_usuario;
						case 5:
							cout<<"***VOLVIENDO AL MENU DEL USUARIO***"<<endl;
							system("pause");
							goto menu_usuario;
						case 6:
							default:
								cout<<"**********************************"<<endl;
								cout<<"*LA OPCION INGRESADA NO ES VALIDA*"<<endl;
								cout<<"**********************************"<<endl;
								system("pause");
								goto menu_servicios;
					}
				case 6:
					menu_yape:
					system("cls");
					cout<<"***********************"<<endl;
					cout<<"***BIENVENIDO A YAPE***"<<endl;
					cout<<"**************************"<<endl;
					cout<<"[1] POR NOMBRE DE USUARIO."<<endl;
					cout<<"[2] POR NUMERO DE CELULAR."<<endl;
					cout<<"[3] VOLVER AL MENU."<<endl;
					cout<<"INGRESE UNA OPCION:"<<endl;
					cin>>opc;
					switch(opc){
						case 1:
							usuario_yape:
							system("cls");
							cout<<"INGRESE EL NOMBRE DE USUARIO:"<<endl;
							cin>>CntBus;
							flag = 0;
							for(int j=0; j<i && flag==0; j++){
								if(Nombre[j] == CntBus){
									w = j;
									flag = 1;
									system("cls");
									cout<<"***********************"<<endl;
									cout<<"***NOMBRE ENCONTRADO***"<<endl;
									cout<<"***********************"<<endl;
									cout<<"NOMBRE DEL BENEFICIARIO: "<<Nombre[j]<<endl;
									system("pause");
								}
							}
							if(flag == 0){
									system("cls");
									cout<<"**************************"<<endl;
									cout<<"***NOMBRE NO ENCONTRADO***"<<endl;
									cout<<"**************************"<<endl;
									cout<<"DESEA INTENTAR NUEVAMENTE?"<<endl;
									cout<<"1. SI"<<endl;
									cout<<"2. NO"<<endl;
									cin>>opc;
									if(opc == 1){
										goto usuario_yape;
									} else if (opc == 2){
										goto menu_yape;
									}
							}
							break;
						case 2:
							numero_yape:
							system("cls");
							cout<<"INGRESE EL NUMERO DE CELULAR:"<<endl;
							cin>>CntBus;
							flag = 0;
							for(int j=0; j<i && flag==0; j++){
								if(Telef[j] == CntBus){
									w = j;
									flag = 1;
									cout<<"***********************"<<endl;
									cout<<"***NUMERO ENCONTRADO***"<<endl;
									cout<<"***********************"<<endl;
									cout<<"NOMBRE DEL BENEFICIARIO: "<<Nombre[j]<<endl;
									system("pause");
								}
							}
							if(flag == 0){
									system("cls");
									cout<<"**************************"<<endl;
									cout<<"***NUMERO NO ENCONTRADO***"<<endl;
									cout<<"**************************"<<endl;
									cout<<"DESEA INTENTAR NUEVAMENTE?"<<endl;
									cout<<"1. SI"<<endl;
									cout<<"2. NO"<<endl;
									cin>>opc;
									if(opc == 1){
										goto numero_yape;
									} else if (opc == 2){
										goto menu_yape;
									}
							}
							break;
						case 3:
							cout<<"***VOLVIENDO AL MENU DEL USUARIO***"<<endl;
							system("pause");
							goto menu_usuario;
						case 4:
							default:
								cout<<"**********************************"<<endl;
								cout<<"*LA OPCION INGRESADA NO ES VALIDA*"<<endl;
								cout<<"**********************************"<<endl;
								system("pause");
								goto menu_yape;
					}
					yape:
					cout<<"INGRESE LA CANTIDAD A YAPEAR:"<<endl;
					cout<<"S/";
					cin>>Retirar;
					if(Retirar > Sueldo[v]){
						cout<<"NO CUENTA CON SALDO SUFICIENTE PARA YAPEAR."<<endl;
						system("pause");
						sin_saldo6:
						system("cls");
						cout<<"DESEA VOLVER AL MENU DE YAPE?:"<<endl;
						cout<<"[1] SI"<<endl;
						cout<<"[2] No"<<endl;
						cout<<"INGRESE UNA OPCION:"<<endl;
						cin>>opc;
						switch(opc){
							case 1:
								goto menu_yape;
							case 2:
								goto yape;
							case 3:
								default:
								cout<<"VALOR INCORRECTO"<<endl;
								system("pause");
								goto sin_saldo6;
						}
					}
					Sueldo[v] = Sueldo[v] - Retirar;
					Sueldo[w] = Sueldo[w] + Retirar;
					cout<<"CANTIDAD YAPEADA EXITOSAMENTE."<<endl;
					h++;
					HistCnt[v][h]="YAPE ENVIADO EXITOSAMENTE--> - S/.";
					HistSld[v][h]= Retirar;
					HistCnt[w][h]="YAPE RECIBIDO EXITOSAMENTE--> + S/.";
					HistSld[w][h]= Retirar;
					system("pause");
					goto menu_usuario;
				case 7:
					ajustes:
					cout<<"***********************"<<endl;
					cout<<"***AJUSTES DE CUENTA***"<<endl;
					cout<<"*****************************"<<endl;
					cout<<"MOSTRANDO DATOS DE LA CUENTA:"<<endl;
					cout<<"- CORREO ELECTRONICO: "<<Correo[v]<<endl;
					cout<<"- NUMERO DE CELULAR: "<<Telef[v]<<endl;
					cout<<"- NOMBRE DE USUARIO: "<<Nombre[v]<<endl;
					cout<<"- CCI DE LA CUENTA: "<<CCI[v]<<endl;
					cout<<"*****************************"<<endl;
					cout<<"MODIFICAR DATOS:"<<endl;
					cout<<"[1] CORREO ELECTRONICO"<<endl;
					cout<<"[2] NUMERO DE CELULAR"<<endl;
					cout<<"[3] NOMBRE DE USUARIO"<<endl;
					cout<<"[4] CLAVE DE USUARIO"<<endl;
					cout<<"[5] VOLVER AL MENU"<<endl;
					cout<<"INGRESE UNA OPCION:"<<endl;
					cin>>opc;
					switch(opc){
						case 1:
							cambio_correo:
							cout<<"INGRESE EL NUEVO CORREO ELECTRONICO:"<<endl;
							cin>>ConfCont;
							if(ConfCont == Correo[v]){
								correo_igual:
								system("cls");
								cout<<"EL CORREO ES IGUAL AL ANTERIOR"<<endl;
								cout<<"[1] INTENTAR NUEVAMENTE."<<endl;
								cout<<"[2] CONSERVAR CORREO."<<endl;
								cout<<"INGRESE UNA OPCION:"<<endl;
								cin>>opc;
								system("cls");
								switch(opc){
									case 1:
										goto cambio_correo;
									case 2:
										break;
									case 3:
										default:
										cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
										system("pause");
										goto correo_igual;
								}
							}else{
								Correo[v] = ConfCont;
							}
							cout<<"CORREO ELECTRONICO MODIFICADO EXITOSAMENTE."<<endl;
							system("pause");
							system("cls");
							goto ajustes;
						case 2:
							cambio_numero:
							cout<<"INGRESE EL NUEVO NUMERO DE CELULAR:"<<endl;
							cin>>ConfCont;
							if(ConfCont == Telef[v]){
								numero_igual:
								system("cls");
								cout<<"EL NUMERO ES IGUAL AL ANTERIOR"<<endl;
								cout<<"[1] INTENTAR NUEVAMENTE."<<endl;
								cout<<"[2] CONSERVAR NUMERO."<<endl;
								cout<<"INGRESE UNA OPCION:"<<endl;
								cin>>opc;
								system("cls");
								switch(opc){
									case 1:
										goto cambio_numero;
									case 2:
										break;
									case 3:
										default:
										cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
										system("pause");
										goto numero_igual;
								}
							}else{
								Telef[v] = ConfCont;
							}
							cout<<"NUMERO DE CELULAR MODIFICADO EXITOSAMENTE."<<endl;
							system("pause");
							system("cls");
							goto ajustes;
						case 3:
							cambio_nombre:
							cout<<"INGRESE EL NUEVO NOMBRE DE USUARIO:"<<endl;
							cin>>ConfCont;
							if(ConfCont == Nombre[v]){
								nombre_igual:
								system("cls");
								cout<<"EL NOMBRE ES IGUAL AL ANTERIOR"<<endl;
								cout<<"[1] INTENTAR NUEVAMENTE."<<endl;
								cout<<"[2] CONSERVAR NOMBRE."<<endl;
								cout<<"INGRESE UNA OPCION:"<<endl;
								cin>>opc;
								system("cls");
								switch(opc){
									case 1:
										goto cambio_nombre;
									case 2:
										break;
									case 3:
										default:
										cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
										system("pause");
										goto nombre_igual;
								}
							}else{
								Nombre[v] = ConfCont;
							}
							cout<<"NOMBRE DE USUARIO MODIFICADO EXITOSAMENTE."<<endl;
							system("pause");
							system("cls");
							goto ajustes;
						case 4:
							cambiar_clave:
							system("cls");
							cout<<"*********************"<<endl;
							cout<<"***MODIFICAR CLAVE***"<<endl;
							cout<<"*******************************************"<<endl;
							cout<<"*POR SEGURIDAD INGRESE NUEVAMENTE SU CLAVE:"<<endl;
							cout<<"*******************************************"<<endl;
							cin>>ConfCont;
							while(ConfCont != Clave[v]){
								error_cont3:
								cout<<"******************"<<endl;
								cout<<"*CLAVE INCORRECTA*"<<endl;
								cout<<"******************"<<endl;
								cout<<"[1] INTENTAR NUEVAMENTE."<<endl;
								cout<<"[2] SALIR AL MENU."<<endl;
								cout<<"INGRESE UNA OPCION:"<<endl;
								cin>>opc;
								system("cls");
								switch(opc){
									case 1:
										goto cambiar_clave;
									case 2:
										goto ajustes;
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
							cambio_clave:
							system("cls");
							cout<<"INGRESE SU NUEVA CLAVE:"<<endl;
							cin>>ConfCont;
							if(ConfCont == Clave[v]){
								clave_igual:
								system("cls");
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
										goto clave_igual;
								}
							}else{
								Clave[v] = ConfCont;
							}
							cout<<"CLAVE MODIFICADA EXITOSAMENTE."<<endl;
							system("pause");
							system("cls");
							goto ajustes;
						case 5:
							cout<<"***VOLVIENDO AL MENU DEL USUARIO***"<<endl;
							system("pause");
							system("cls");
							goto menu_usuario;
						case 6:
							default:
								cout<<"**********************************"<<endl;
								cout<<"*LA OPCION INGRESADA NO ES VALIDA*"<<endl;
								cout<<"**********************************"<<endl;
								system("pause");
								system("cls");
								goto ajustes;
					}
				case 8:
					cout<<"**************************"<<endl;
					cout<<"*HISTORIAL DE MOVIMIENTOS:"<<endl;
					cout<<"**************************"<<endl;
					for(int c=0; c<h; c++){
						cout<<c+1<<".- "<<HistCnt[v][c+1]<<HistSld[v][c+1]<<endl;
					}
					system("pause");
					goto menu_usuario;
				case 9:
					cout<<"CERRANDO SESION..."<<endl;
					flag = 0;
					system("pause");
					goto menu_principal;
				case 10:
					default:
					cout<<"LA OPCION INGRESADA NO ES VALIDA."<<endl;
					system("pause");
							goto menu_usuario;
			}
			if(flag ==0){
				error_usuario:
				system("cls");
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
						goto ajustes;
				}
			}
			break;
		case 3:
			cout<<"**************************************"<<endl;
			cout<<"*****VISUALIZAR TODAS LAS CUENTAS*****"<<endl;
			cout<<"**************************************"<<endl;
			for(int k=0; k<i; k++){
				cout<<"*NOMBRE DE CUENTA "<<k+1<<" -> |"<<Nombre[k]<<"|"<<endl;
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
				cout<<"**********************************"<<endl;
				cout<<"*LA OPCION INGRESADA NO ES VALIDA*"<<endl;
				cout<<"**********************************"<<endl;
				system("pause");
				goto menu_principal;
	}
}
