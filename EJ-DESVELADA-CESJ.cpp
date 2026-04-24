#include <iostream>
#include <string>

using namespace std;

int main () {
	string nom1, nom2, nom3;
	int nota1_nom1, nota2_nom1, nota3_nom1;
	int nota1_nom2, nota2_nom2, nota3_nom2;
	int nota1_nom3, nota2_nom3, nota3_nom3;
	double prom1, prom2, prom3;
	int opcion;
	
	inicio_switch:
		
		cout<<"******BIENVENIDO A MI LISTA DE ESTUDIANTES******"<<endl;
		cout<<"************************************************"<<endl;
		cout<<"[1] Nombrar a los estudiantes."<<endl;
		cout<<"[2] Ingresar las notas del primer estudiante."<<endl;
		cout<<"[3] Ingresar las notas del segundo estudiante."<<endl;
		cout<<"[4] Ingresar las notas del tercer estudiante."<<endl;
		cout<<"[5] Mostrar el promedio del primer estudiante."<<endl;
		cout<<"[6] Mostrar el promedio del segundo estudiante."<<endl;
		cout<<"[7] Mostrar el promedio del tercer estudiante."<<endl;
		cout<<"[8] Mostrar los datos de todos los estudiantes."<<endl;
		cout<<"[9] Mostrar los datos de los aprobados."<<endl;
		cout<<"[10] Mostrar los datos de los desaprobados."<<endl;
		cout<<"[11] SALIR."<<endl;
		cout<<"************************************************"<<endl;
		cin>>opcion;
		
	switch(opcion) {
		case 1:
			cout<<"******NOMBRAR A LOS ESTUDIANTES******"<<endl;
			cout<<"*************************************"<<endl;
			cout<<"Ingrese el nombre del primer estudiante:"<<endl;
			cin>>nom1;
			cout<<"Ingrese el nombre del segundo estudiante:"<<endl;
			cin>>nom2;
			cout<<"Ingrese el nombre del tercer estudiante:"<<endl;
			cin>>nom3;
			system("pause");
			system("cls");
			goto inicio_switch;
		case 2:
			cout<<"******NOTAS DEL PRIMER ESTUDIANTE******"<<endl;
			cout<<"***************************************"<<endl;
			cout<<"Primera nota:"; cin>>nota1_nom1;
			cout<<"Segunda nota:"; cin>>nota2_nom1;
			cout<<"Tercera nota:"; cin>>nota3_nom1;
			prom1 = (nota1_nom1 + nota2_nom1 + nota3_nom1)/3;
			system("pause");
			system("cls");
			goto inicio_switch;
		case 3:
			cout<<"******NOTAS DEL SEGUNDO ESTUDIANTE******"<<endl;
			cout<<"****************************************"<<endl;
			cout<<"Primera nota:"; cin>>nota1_nom2;
			cout<<"Segunda nota:"; cin>>nota2_nom2;
			cout<<"Tercera nota:"; cin>>nota3_nom2;
			prom2 = (nota1_nom2 + nota2_nom2 + nota3_nom2)/3;
			system("pause");
			system("cls");
			goto inicio_switch;
		case 4:
			cout<<"******NOTAS DEL TERCER ESTUDIANTE******"<<endl;
			cout<<"***************************************"<<endl;
			cout<<"Primera nota:"; cin>>nota1_nom3;
			cout<<"Segunda nota:"; cin>>nota2_nom3;
			cout<<"Tercera nota:"; cin>>nota3_nom3;
			prom3 = (nota1_nom3 + nota2_nom3 + nota3_nom3)/3;
			system("pause");
			system("cls");
			goto inicio_switch;
		case 5:
			cout<<"******PROMEDIO DEL PRIMER ESTUDIANTE******"<<endl;
			cout<<"******************************************"<<endl;
			cout<<"Nombre: "<<nom1<<endl;
			cout<<"Promedio: "<<prom1<<endl;
			system("pause");
			system("cls");
			goto inicio_switch;
		case 6:
			cout<<"******PROMEDIO DEL SEGUNDO ESTUDIANTE******"<<endl;
			cout<<"*******************************************"<<endl;
			cout<<"Nombre: "<<nom2<<endl;
			cout<<"Promedio: "<<prom2<<endl;
			system("pause");
			system("cls");
			goto inicio_switch;
		case 7:
			cout<<"******PROMEDIO DEL TERCER ESTUDIANTE******"<<endl;
			cout<<"******************************************"<<endl;
			cout<<"Nombre: "<<nom3<<endl;
			cout<<"Promedio: "<<prom3<<endl;
			system("pause");
			system("cls");
			goto inicio_switch;
		case 8:
			cout<<"******DATOS DE TODOS LOS ESTUDIANTES******"<<endl;
			cout<<"******************************************"<<endl;
			cout<<"PRIMER ESTUDIANTE:"<<endl;
			cout<<"NOMBRE:"<<endl;
			cout<<"-> "<<nom1<<endl;
			cout<<"NOTAS:"<<endl;
			cout<<"1> "<<nota1_nom1<<endl;
			cout<<"2> "<<nota2_nom1<<endl;
			cout<<"3> "<<nota3_nom1<<endl;
			cout<<"PROMEDIO APROXIMADO:"<<endl;
			cout<<"-> "<<prom1<<endl;
			cout<<"******************************"<<endl;
			cout<<"SEGUNDO ESTUDIANTE:"<<endl;
			cout<<"NOMBRE:"<<endl;
			cout<<"-> "<<nom2<<endl;
			cout<<"NOTAS:"<<endl;
			cout<<"1> "<<nota1_nom2<<endl;
			cout<<"2> "<<nota2_nom2<<endl;
			cout<<"3> "<<nota3_nom2<<endl;
			cout<<"PROMEDIO APROXIMADO:"<<endl;
			cout<<"-> "<<prom2<<endl;
			cout<<"******************************"<<endl;
			cout<<"TERCER ESTUDIANTE:"<<endl;
			cout<<"NOMBRE:"<<endl;
			cout<<"-> "<<nom3<<endl;
			cout<<"NOTAS:"<<endl;
			cout<<"1> "<<nota1_nom3<<endl;
			cout<<"2> "<<nota2_nom3<<endl;
			cout<<"3> "<<nota3_nom3<<endl;
			cout<<"PROMEDIO APROXIMADO:"<<endl;
			cout<<"-> "<<prom3<<endl;
			system("pause");
			system("cls");
			goto inicio_switch;
		case 9:
			cout<<"******ESTUDIANTES APROBADOS******"<<endl;
			cout<<"*********************************"<<endl;
			if(prom1>11){
				cout<<"PRIMER ESTUDIANTE:"<<endl;
				cout<<"NOMBRE:"<<endl;
				cout<<"-> "<<nom1<<endl;
				cout<<"PROMEDIO APROXIMADO:"<<endl;
				cout<<"-> "<<prom1<<endl;
				cout<<"*******************************"<<endl;
			}
			if(prom2>11){
				cout<<"SEGUNDO ESTUDIANTE:"<<endl;
				cout<<"NOMBRE:"<<endl;
				cout<<"-> "<<nom2<<endl;
				cout<<"PROMEDIO APROXIMADO:"<<endl;
				cout<<"-> "<<prom2<<endl;
				cout<<"*******************************"<<endl;
			}
			if(prom3>11){
				cout<<"TERCER ESTUDIANTE:"<<endl;
				cout<<"NOMBRE:"<<endl;
				cout<<"-> "<<nom3<<endl;
				cout<<"PROMEDIO APROXIMADO:"<<endl;
				cout<<"-> "<<prom3<<endl;
			}
			system("pause");
			system("cls");
			goto inicio_switch;
		case 10:
			cout<<"******ESTUDIANTES DESAPROBADOS******"<<endl;
			cout<<"************************************"<<endl;
			if(prom1<11){
				cout<<"PRIMER ESTUDIANTE:"<<endl;
				cout<<"NOMBRE:"<<endl;
				cout<<"-> "<<nom1<<endl;
				cout<<"PROMEDIO APROXIMADO:"<<endl;
				cout<<"-> "<<prom1<<endl;
				cout<<"*******************************"<<endl;
			}
			if(prom2<11){
				cout<<"SEGUNDO ESTUDIANTE:"<<endl;
				cout<<"NOMBRE:"<<endl;
				cout<<"-> "<<nom2<<endl;
				cout<<"PROMEDIO APROXIMADO:"<<endl;
				cout<<"-> "<<prom2<<endl;
				cout<<"*******************************"<<endl;
			}
			if(prom3<11){
				cout<<"TERCER ESTUDIANTE:"<<endl;
				cout<<"NOMBRE:"<<endl;
				cout<<"-> "<<nom3<<endl;
				cout<<"PROMEDIO APROXIMADO:"<<endl;
				cout<<"-> "<<prom3<<endl;
			}
			system("pause");
			system("cls");
			goto inicio_switch;
		case 11:
		default:
			cout<<"La opcion ingresada no es valida, intente de nuevo..."<<endl;
			system("pause");
			system("cls");
			goto inicio_switch;
	}
}