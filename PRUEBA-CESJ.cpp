#include <iostream>
#include <string.h>

using namespace std;

int opc, acumulado;
int totalDoc=0;
char eleccion;

struct Curso{
	string Nom_Cur;
	int N1;
	int N2;
	int N3;
	int Prom;
};

struct Estudiante{
	string Nom_Est;
	string DNI_Est;
	Curso Cur[3];
};

struct Docente{
	string Nom_Doc;
	string DNI_Doc;
	Estudiante Est[3];
}Doc[3];

void ingresarDatos(){
	cout<<"INGRESE LOS DATOS DEL DOCENTE...\n";
	cout<<"DOCENTE "<<totalDoc+1<<endl;
	cout<<"NOMBRE: ";
	cin>>Doc[totalDoc].Nom_Doc;
	cout<<"DNI: ";
	cin>>Doc[totalDoc].DNI_Doc;
	system("cls");
	cout<<"MENU DEL DOCENTE "<<Doc[totalDoc].Nom_Doc<<endl;
	cout<<"1. INGRESAR ESTUDIANTES\n";
	cout<<"2. MOSTRAR DATOS\n";
	cin>>opc;
	system("cls");
	switch(opc){
		case 1:
			cout<<"DATOS DE SUS ESTUDIANTES...\n";
			for(int j=0; j<3; j++){
				cout<<"ESTUDIANTE "<<j+1<<endl;
				cout<<"NOMBRE: ";
				cin>>Doc[totalDoc].Est[j].Nom_Est;
				cout<<"DNI: ";
				cin>>Doc[totalDoc].Est[j].DNI_Est;
				cout<<"MATRICULAR EN CURSOS...\n";
				Doc[totalDoc].Est[j].Cur[0].Nom_Cur="PROGRAMACION";
				Doc[totalDoc].Est[j].Cur[1].Nom_Cur="CALCULO II";
				Doc[totalDoc].Est[j].Cur[2].Nom_Cur="FISICA II";
				for(int k=0; k<3; k++){
					acumulado=0;
					cout<<"\nMATRICULARSE EN "<<Doc[totalDoc].Est[j].Cur[k].Nom_Cur<<" (S/N):"<<endl;
					cin>>eleccion;
					if(eleccion=='s' || eleccion=='S'){
						cout<<"NOTA 1:\n";
						cin>>Doc[totalDoc].Est[j].Cur[k].N1;
						acumulado+=Doc[totalDoc].Est[j].Cur[k].N1;
						cout<<"NOTA 2:\n";
						cin>>Doc[totalDoc].Est[j].Cur[k].N2;
						acumulado+=Doc[totalDoc].Est[j].Cur[k].N2;
						cout<<"NOTA 3:\n";
						cin>>Doc[totalDoc].Est[j].Cur[k].N3;
						acumulado+=Doc[totalDoc].Est[j].Cur[k].N3;
						Doc[totalDoc].Est[j].Cur[k].Prom=acumulado/3.0;
						cout<<Doc[totalDoc].Est[j].Cur[k].Prom;
					} else{
						Doc[totalDoc].Est[j].Cur[k].N1=0;
						Doc[totalDoc].Est[j].Cur[k].N2=0;
						Doc[totalDoc].Est[j].Cur[k].N3=0;
						Doc[totalDoc].Est[j].Cur[k].Prom=0;
					}
				}
			}
			break;
		case 2:
			cout<<"MOSTRANDO DATOS...\n";
			cout<<"DOCENTE...\n";
			cout<<"NOMBRE DE DOCENTE: "<<Doc[totalDoc].Nom_Doc<<endl;
			cout<<"DNI DE DOCENTE: "<<Doc[totalDoc].DNI_Doc<<endl;
			cout<<"ESTUDIANTES...\n";
			for(int j=0; j<3; j++){
				cout<<"\tESTUDIANTE "<<j+1<<endl;
				cout<<"NOMBRE: ";
				cout<<Doc[totalDoc].Est[j].Nom_Est<<endl;
				cout<<"DNI: ";
				cout<<Doc[totalDoc].Est[j].DNI_Est<<endl;
				cout<<"CURSOS";
				for(int k=0; k<3; k++){
					cout<<"\nCURSO "<<Doc[totalDoc].Est[j].Cur[k].Nom_Cur<<endl;
					cout<<"PROMEDIO : "<<Doc[totalDoc].Est[j].Cur[k].Prom<<endl;
				}
			}
			break;
		case 3:
			default:
				cout<<"OPCION NO VALIDA."<<endl;
	}
	system("cls");
	totalDoc++;
}

void mostrarDatos(){
	for(int k=0; k<3; k++){
		cout<<"MOSTRANDO DATOS...\n";
		cout<<"\tDOCENTE "<<k+1<<endl;
		cout<<"NOMBRE DE DOCENTE: "<<Doc[k].Nom_Doc<<endl;
		cout<<"DNI DE DOCENTE: "<<Doc[k].DNI_Doc<<endl;
		cout<<"Y SUS ESTUDIANTES\n";
		for(int j=0; j<3; j++){
			cout<<"\tESTUDIANTE "<<j+1<<endl;
			cout<<"NOMBRE: ";
			cout<<Doc[k].Est[j].Nom_Est<<endl;
			cout<<"DNI: ";
			cout<<Doc[k].Est[j].DNI_Est<<endl;
		}
		system("pause");
		system("cls");
	}
}

int main () {
	do{
		cout<<"GESTION DE NOTAS.\n";
		cout<<"1. INGRESAR DOCENTES.\n";
		cout<<"2. MOSTRAR DATOS.\n";
		cin>>opc;
		system("cls");
		switch(opc){
			case 1:
				ingresarDatos();
				break;
			case 2:
				mostrarDatos();
				break;
			case 3:
				default:
					cout<<"OPCION NO VALIDA."<<endl;
		}
	}while(opc>0);
}
