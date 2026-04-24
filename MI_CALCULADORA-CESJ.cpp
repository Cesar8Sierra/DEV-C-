#include <iostream>
#include <math.h>

using namespace std;

int main () {
	int opc;
	double num1, num2;
	
	inicio:
	system("cls");
	cout<<"***BIENVENIDO A MI CALCULADORA***"<<endl;
	cout<<"INGRESE LA OPERACION A REALIZAR:"<<endl;
	cout<<"[1] SUMA.\n";
	cout<<"[2] RESTA.\n";
	cout<<"[3] MULTIPLICACION.\n";
	cout<<"[4] DIVISION.\n";
	cout<<"[5] POTENCIACION.\n";
	cout<<"[6] RACIONALIZACION.\n";
	cout<<"[7] SALIR.\n";
	cout<<"INGRESE UNA OPCION:"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"***SUMA***"<<endl;
			cout<<"**********"<<endl;
			cout<<"INGRESE EL PRIMER VALOR:"<<endl;
			cin>>num1;
			cout<<"INGRESE EL SEGUNDO VALOR:"<<endl;
			cin>>num2;
			cout<<"LA SUMA DE AMBOS VALORES ES: "<<num1+num2<<endl;
			system("pause");
			goto inicio;
		case 2:
			cout<<"***RESTA***"<<endl;
			cout<<"***********"<<endl;
			cout<<"INGRESE EL PRIMER VALOR:"<<endl;
			cin>>num1;
			cout<<"INGRESE EL SEGUNDO VALOR:"<<endl;
			cin>>num2;
			cout<<"LA RESTA DE AMBOS VALORES ES: "<<num1-num2<<endl;
			system("pause");
			goto inicio;
		case 3:
			cout<<"***MULTIPLICACION***"<<endl;
			cout<<"********************"<<endl;
			cout<<"INGRESE EL PRIMER VALOR:"<<endl;
			cin>>num1;
			cout<<"INGRESE EL SEGUNDO VALOR:"<<endl;
			cin>>num2;
			cout<<"LA MULTIPLICACION DE AMBOS VALORES ES: "<<num1*num2<<endl;
			system("pause");
			goto inicio;
		case 4:
			cout<<"***DIVISION***"<<endl;
			cout<<"**************"<<endl;
			cout<<"INGRESE EL PRIMER VALOR:"<<endl;
			cin>>num1;
			cout<<"INGRESE EL SEGUNDO VALOR:"<<endl;
			cin>>num2;
			cout<<"LA DIVISION DE AMBOS VALORES ES: "<<num1/num2<<endl;
			system("pause");
			goto inicio;
		case 5:
			cout<<"***POTENCIACION***"<<endl;
			cout<<"**************"<<endl;
			cout<<"INGRESE EL VALOR DE LA BASE:"<<endl;
			cin>>num1;
			cout<<"INGRESE EL VALOR DEL EXPONENTE:"<<endl;
			cin>>num2;
			cout<<"LA POTENCIACION ES: "<<pow(num1, num2)<<endl;
			system("pause");
			goto inicio;
		case 6:
			cout<<"***RACIONALIZACION***"<<endl;
			cout<<"**************"<<endl;
			cout<<"INGRESE EL VALOR DENTRO DE LA RAIZ:"<<endl;
			cin>>num1;
			cout<<"INGRESE EL VALOR DE LA RAIZ:"<<endl;
			cin>>num2;
			cout<<"LA RAIZ ES: "<<pow(num1, 1/num2)<<endl;
			system("pause");
			goto inicio;
		case 7:
			cout<<"SEGURO QUE DESEA SALIR:"<<endl;
			cout<<"[1] NO.\n";
			cout<<"[2] SI.\n";
			cin>>opc;
			switch(opc){
				case 1:
					system("pause");
					goto inicio;
				case 2:
					break;
			}
			break;
		case 8:
			default:
				cout<<"OPCION INGRESADA NO VALIDA..."<<endl;
				system("pause");
				goto inicio;
	}
}
