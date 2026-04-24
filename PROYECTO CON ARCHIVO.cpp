#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>

//	Curso: Lenguaje de Programacion Estructurado
//	Apellidos y Nombres: Sierra Jacinto Cesar Emerson
//	Codigo (Estudiante): 23221025
//	Nombre del Proyecto: Gestion de Notas para el docente

using namespace std;

int totalDocentes=0;

struct Cursos{
	string Nom_Curso;
    int N1;
    int N2;
    int N3;
    float Promedio;
    string Condicion;
};

struct Estudiante{
    string Nom;
    int DNI_Est;
    struct Cursos Cur[5];
};

struct Docente{
    string Nom;
    int DNI_Doc;
    int Cant_Est;
    struct Estudiante Est[10];
}Doc[10];

void registrarDocente(){
    if(totalDocentes<10){
    	cout<<"*************************\n";
        cout<<"REGISTRO DE NUEVO DOCENTE:\n";
        cout<<"NOMBRE: ";
        cin.ignore();
        getline(cin,Doc[totalDocentes].Nom);
        cout<<"DNI: ";
        cin>>Doc[totalDocentes].DNI_Doc;
        Doc[totalDocentes].Cant_Est=0;
        totalDocentes++;
        cout<<"DOCENTE REGISTRADO EXITOSAMENTE.\n";
    }else{
        cout<<"CAPACIDAD MAXIMA DE DOCENTES ALCANZADA.\n";
    }
}

void verDocentes(){
    cout<<"LISTA DE DOCENTES REGISTRADOS:\n";
    for(int i=0;i<totalDocentes;i++){
        cout<<i+1<<". "<<Doc[i].Nom<<" (DNI: "<<Doc[i].DNI_Doc<<")\n";
    }
}

void agregarEstudiantes(int indiceDocente){
    int cant;
    cout<<"INGRESE CANTIDAD DE ESTUDIANTES: ";
    cin>>cant;
    for(int i=Doc[indiceDocente].Cant_Est; i<Doc[indiceDocente].Cant_Est+cant; i++){
		Doc[indiceDocente].Est[i].Cur[0].Nom_Curso="PROGRAMACION";
		Doc[indiceDocente].Est[i].Cur[1].Nom_Curso="FISICA II";
		Doc[indiceDocente].Est[i].Cur[2].Nom_Curso="CALCULO II";
		Doc[indiceDocente].Est[i].Cur[3].Nom_Curso="ESTADISTICA";
		Doc[indiceDocente].Est[i].Cur[4].Nom_Curso="ECONOMIA";
		system("cls");
        cout<<"DATOS DEL ESTUDIANTE "<<i+1<<":\n";
        cout<<"NOMBRE: ";
        cin.ignore();
        getline(cin,Doc[indiceDocente].Est[i].Nom);
        cout<<"DNI: ";
        cin>>Doc[indiceDocente].Est[i].DNI_Est;
        cout<<"SELECCIONE LOS CURSOS EN LOS QUE DESEA MATRICULARSE (S/N):\n";
        for(int j=0;j<5;j++){
        	getch();
        	system("cls");
        	int nota_acumulada=0;	
            char eleccion;
            cout<<Doc[indiceDocente].Est[i].Cur[j].Nom_Curso<<": ";
            cin>>eleccion;
            if(eleccion == 'S' || eleccion == 's'){
				cout<<"NOTA 1: ";
		        cin>>Doc[indiceDocente].Est[i].Cur[j].N1;
		        nota_acumulada+=Doc[indiceDocente].Est[i].Cur[j].N1;
		        cout<<"NOTA 2: ";
		        cin>>Doc[indiceDocente].Est[i].Cur[j].N2;
		        nota_acumulada+=Doc[indiceDocente].Est[i].Cur[j].N2;
		        cout<<"NOTA 3: ";
		        cin>>Doc[indiceDocente].Est[i].Cur[j].N3;
		        nota_acumulada+=Doc[indiceDocente].Est[i].Cur[j].N3;
		
		        Doc[indiceDocente].Est[i].Cur[j].Promedio=nota_acumulada/3.0;
		        cout<<"PROMEDIO: "<<Doc[indiceDocente].Est[i].Cur[j].Promedio<<"  ";
		        if(Doc[indiceDocente].Est[i].Cur[j].Promedio<10.5){
		        	Doc[indiceDocente].Est[i].Cur[j].Condicion="(DESAPROBADO)";
				} else{
					Doc[indiceDocente].Est[i].Cur[j].Condicion="(APROBADO)";
				}
				cout<<Doc[indiceDocente].Est[i].Cur[j].Condicion<<endl;
            }else{
                Doc[indiceDocente].Est[i].Cur[j].Promedio=0;
            }
        }
        getch();
    }
    Doc[indiceDocente].Cant_Est+=cant;
}

void modificarNotas(int ind_doc, int m, int n){
	int acumulador=0;
	cout<<"INGRESE LAS NUEVAS NOTAS DE "<<Doc[ind_doc].Est[m].Cur[n].Nom_Curso<<":\n";
	cout<<"NOTA 1: ";
	cin>>Doc[ind_doc].Est[m].Cur[n].N1;
	acumulador += Doc[ind_doc].Est[m].Cur[n].N1;
	cout<<"NOTA 2: ";
	cin>>Doc[ind_doc].Est[m].Cur[n].N2;
	acumulador += Doc[ind_doc].Est[m].Cur[n].N2;
	cout<<"NOTA 3: ";
	cin>>Doc[ind_doc].Est[m].Cur[n].N3;
	acumulador += Doc[ind_doc].Est[m].Cur[n].N3;
	
	Doc[ind_doc].Est[m].Cur[n].Promedio=acumulador/3.0;
	cout<<"PROMEDIO: "<<Doc[ind_doc].Est[m].Cur[n].Promedio<<"  ";
	if(Doc[ind_doc].Est[m].Cur[n].Promedio<10.5){
		Doc[ind_doc].Est[m].Cur[n].Condicion="(DESAPROBADO)";
	} else{
		Doc[ind_doc].Est[m].Cur[n].Condicion="(APROBADO)";
	}
	cout<<Doc[ind_doc].Est[m].Cur[n].Condicion<<endl;
}

void modificarDatos(int indice_Doc){
    int dni,opcion;
    cout<<"INGRESE DNI DEL ESTUDIANTE A MODIFICAR: ";
    cin>>dni;

    for(int j=0; j<Doc[indice_Doc].Cant_Est; j++){
        if(Doc[indice_Doc].Est[j].DNI_Est==dni){
            cout<<"ESTUDIANTE ENCONTRADO, QUE DESEA MODIFICAR?:\n";
            cout<<"1. NOMBRE\n";
            cout<<"2. DNI\n";
            cout<<"3. CALIFICACIONES\n";
            cout<<"OPCION: ";
            cin>>opcion;
			system("cls");
            switch(opcion){
                case 1:
                    cout<<"INGRESE EL NUEVO NOMBRE: ";
                    cin>>Doc[indice_Doc].Est[j].Nom;
                    cout<<"NOMBRE MODIFICADO CORRECTAMENTE.\n";
                    getch();
                    break;
                case 2:
                    cout<<"INGRESE EL NUEVO DNI: ";
                    cin>>Doc[indice_Doc].Est[j].DNI_Est;
                    cout<<"DNI MODIFICADO CORRECTAMENTE.\n";
                    getch();
                    break;
                case 3:
                	curso:
                	for(int k=0; k<5; k++){
                		if(Doc[indice_Doc].Est[j].Cur[k].Promedio!=0){
                			cout<<k+1<<". "<<Doc[indice_Doc].Est[j].Cur[k].Nom_Curso<<endl;
						} else{
							cout<<k+1<<". ---"<<endl;
						}
					}
                	cout<<"INGRESE EL CURSO A MODIFICAR:\n";
                	cin>>opcion;
                	switch(opcion){
                		case 1:
                			if(Doc[indice_Doc].Est[j].Cur[0].Promedio!=0){
                				modificarNotas(indice_Doc, j, 0);
							} else{
								cout<<"EL CURSO NO ESTA REGISTRADO."<<endl;
								getch();
								system("cls");
								goto curso;
							}
							break;
                		case 2:
                			if(Doc[indice_Doc].Est[j].Cur[1].Promedio!=0){
                				modificarNotas(indice_Doc, j, 1);
							} else{
								cout<<"EL CURSO NO ESTA REGISTRADO."<<endl;
								getch();
								system("cls");
								goto curso;
							}
							break;
                		case 3:
                			if(Doc[indice_Doc].Est[j].Cur[2].Promedio!=0){
                				modificarNotas(indice_Doc, j, 2);
							} else{
								cout<<"EL CURSO NO ESTA REGISTRADO."<<endl;
								getch();
								system("cls");
								goto curso;
							}
							break;
                		case 4:
                			if(Doc[indice_Doc].Est[j].Cur[3].Promedio!=0){
                				modificarNotas(indice_Doc, j, 3);
							} else{
								cout<<"EL CURSO NO ESTA REGISTRADO."<<endl;
								getch();
								system("cls");
								goto curso;
							}
							break;
                		case 5:
                			if(Doc[indice_Doc].Est[j].Cur[4].Promedio!=0){
                				modificarNotas(indice_Doc, j, 4);
							} else{
								cout<<"EL CURSO NO ESTA REGISTRADO."<<endl;
								getch();
								system("cls");
								goto curso;
							}
							break;
                	}
                    cout<<"CALIFICACIONES MODIFICADAS CORRECTAMENTE.\n";
                    getch();
                    break;
                default:
                    cout<<"OPCION NO VALIDA.\n";
                    getch();
            }
        }
    	cout<<"ESTUDIANTE CON DNI "<<dni<<" NO ENCONTRADO.\n";
    	system("cls");
    }
    getch();
}

void escribirDocentesYEstudiantesEnArchivo(int indiceDocente){
    ofstream archivo;
    string nombreArchivo="DOCENTE-"+Doc[indiceDocente].Nom+".txt";
    archivo.open(nombreArchivo.c_str(),ios::out);
    archivo<<"DOCENTE: "<<Doc[indiceDocente].Nom<<" (DNI: "<<Doc[indiceDocente].DNI_Doc<<")\n";

    for(int j=0;j<Doc[indiceDocente].Cant_Est;j++){
        archivo<<"\nESTUDIANTE "<<j+1<<": "<<Doc[indiceDocente].Est[j].Nom<<endl;
        archivo<<"DNI: "<<Doc[indiceDocente].Est[j].DNI_Est<<endl;
        archivo<<"CURSOS MATRICULADOS: "<<endl;
        
        for(int k=0;k<5;k++){
            if(Doc[indiceDocente].Est[j].Cur[k].Promedio!=0){
                archivo<<k+1<<".- "<<Doc[indiceDocente].Est[j].Cur[k].Nom_Curso<<endl;
                archivo<<"PROMEDIO: "<<Doc[indiceDocente].Est[j].Cur[k].Promedio<<endl;
        		archivo<<"CONDICION: "<<Doc[indiceDocente].Est[j].Cur[k].Condicion<<endl;
            } else{
            	archivo<<k+1<<".- ---\n";
			}
        }
        archivo<<endl;
    }
    archivo.close();
    cout<<"DATOS GUARDADOS EN EL ARCHIVO: "<<nombreArchivo<<endl;
    getch();
}

void rankingAcademico(int indiceDocente){
	int opcion;
	for(int k=0; k<5; k++){
	    cout<<k+1<<". "<<Doc[indiceDocente].Est[0].Cur[k].Nom_Curso<<endl;
	}
    cout<<"INGRESE EL CURSO A AVERIGUAR:";
    cin>>opcion;
    
	float promedios[10];
    string nombres[10];
    int cantidad=Doc[indiceDocente].Cant_Est;

    for(int i=0;i<cantidad;i++){
        promedios[i]=Doc[indiceDocente].Est[i].Cur[opcion-1].Promedio;
        nombres[i]=Doc[indiceDocente].Est[i].Nom;
    }
    
	for(int i=0; i<cantidad-1; i++){
	    for(int j=0; j<cantidad-i-1; j++){
	        if(promedios[j]<promedios[j + 1]){
	            float aux = promedios[j];
	            promedios[j] = promedios[j+1];
	            promedios[j+1] = aux;
				
	            string auxNombre = nombres[j];
	            nombres[j] = nombres[j+1];
	            nombres[j+1] = auxNombre;
	        }
	    }
	}

    cout<<"RANKING ACADEMICO (TOP 3):\n";
    for(int i=0; i<cantidad && i<3; i++){
        cout<<i+1<<". "<<nombres[i]<<" - PROMEDIO: "<<promedios[i]<<endl;
    }
    getch();
}

void mostrarDocentesYEstudiantes(){
    cout<<"LISTA DE TODOS LOS DOCENTES Y ESTUDIANTES:\n";
    for(int i=0;i<totalDocentes;i++){
        cout<<"\nDOCENTE: "<<Doc[i].Nom<<" (DNI: "<<Doc[i].DNI_Doc<<")\n";
        for(int j=0;j<Doc[i].Cant_Est;j++){
            cout<<"ESTUDIANTE "<<j+1<<": "<<Doc[i].Est[j].Nom<<endl;
            cout<<"DNI: "<<Doc[i].Est[j].DNI_Est<<endl;
            cout<<"CURSOS:\n";
            for(int k=0;k<5;k++){
                if(Doc[i].Est[j].Cur[k].Promedio!=0){
                    cout<<k+1<<". "<<Doc[i].Est[j].Cur[k].Nom_Curso<<endl;
            		cout<<"PROMEDIO: "<<Doc[i].Est[j].Cur[k].Promedio<<endl;
                } else{
                	cout<<k+1<<". ---\n";
				}
            }
            cout<<endl;
        }
    }
}

void inicioSesion(){
	verDocentes();
	int Num_docente;
    cout<<"INGRESE EL NUMERO DEL DOCENTE (1 a "<<totalDocentes<<"):\n";
    cin>>Num_docente;
    Num_docente--;
    if(Num_docente>=0 && Num_docente<totalDocentes){
        int opcion_docente;
        do{
            system("cls");
            cout<<"***** MENU DEL DOCENTE: "<<Doc[Num_docente].Nom<<" *****\n";
            cout<<"1. AGREGAR ESTUDIANTES\n";
            cout<<"2. MODIFICAR DATOS DE UN ESTUDIANTE\n";
            cout<<"3. GUARDAR DATOS EN ARCHIVO\n";
            cout<<"4. VER RANKING ACADEMICO\n";
            cout<<"5. CERRAR SESION\n";
            cout<<"INGRESE EL OPCION: ";
            cin>>opcion_docente;
			system("cls");
            switch(opcion_docente){
                case 1:
                    agregarEstudiantes(Num_docente);
                    break;
                case 2:
                    modificarDatos(Num_docente);
                    break;
                case 3:
                    escribirDocentesYEstudiantesEnArchivo(Num_docente);
                    break;
                case 4:
                    rankingAcademico(Num_docente);
                    break;
                case 5:
                    cout<<"SESION CERRADA.\n";
                    opcion_docente=0;
                    break;
                default:
                    cout<<"OPCION NO VALIDA.\n";
            }
        }while(opcion_docente>0);
    }else{
        cout<<"DOCENTE NO ENCONTRADO.\n";
    }
}

int main(){
    int opcion;
    do{
    	getch();
    	system("cls");
    	cout<<"*****GESTION DE NOTAS*****\n";
        cout<<"******MENU PRINCIPAL******\n";
        cout<<"1. REGISTRAR NUEVO DOCENTE\n";
        cout<<"2. INICIAR SESION COMO DOCENTE\n";
        cout<<"3. VER TODOS LOS DOCENTES\n";
        cout<<"4. MOSTRAR DOCENTES Y SUS ESTUDIANTES\n";
        cout<<"5. SALIR\n";
        cout<<"OPCION: ";
        cin>>opcion;
        system("cls");

        switch(opcion){
            case 1:
                registrarDocente();
                break;
            case 2:
            	inicioSesion();
                break;
            case 3:
                verDocentes();
                break;
            case 4:
                mostrarDocentesYEstudiantes();
                break;
            case 5:
                cout<<"GRACIAS POR USAR MI PROYECTO - CESJ.\n";
                opcion=0;
                break;
            default:
                cout<<"OPCION NO VALIDA.\n";
        }
    }while(opcion>0);
}
