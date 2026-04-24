#include <iostream>
#include <string.h>

using namespace std;

int main (){
	string X[8][8];
	int opc;
	int pci=0, pcj=0, cpyi=0, cpyj=0;
	bool J=false;
	
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			X[i][j] = "[ ]";
		}
	}
	
	movimiento:
	system("cls");
	if(J==true){
		cout<<"EL CABALLO NO PUEDE MOVERSE EN ESA DIRECCION."<<endl;
	} else{
		cout<<endl;
	}
	J = true;
	cout<<"MOSTRANDO EL TABLERO..."<<endl;
	X[cpyi][cpyj] = "[ ]";
	X[pci][pcj] = "[+]";
	cpyi = pci;
	cpyj = pcj;
	for(int i=0; i<8; i++){
		cout<<'\n';
		for(int j=0; j<8; j++){
			cout<<X[i][j];
		}
	}
	
	cout<<"\nA DONDE DESEA MOVER EL CABALLO: "<<endl;
	cout<<"1. ARRIBA."<<endl;
	cout<<"2. DERECHA."<<endl;
	cout<<"3. ABAJO."<<endl;
	cout<<"4. IZQUIERDA."<<endl;
	cin>>opc;
	switch(opc){
		case 1:
			if(pci<2){
				goto movimiento;
			}
			cout<<"INGRESE LA SEGUNDA DIRECCION:"<<endl;
			cout<<"1. DERECHA."<<endl;
			cout<<"2. IZQUIERDA."<<endl;
			cin>>opc;
			if(opc==1 && pcj<=6){
				pci=pci-2;
				pcj=pcj+1;
			} else if(opc==2 && pcj>=1){
				pci=pci-2;
					pcj=pcj-1;
			} else{
				goto movimiento;
			}
			break;
		case 2:
			if(pcj>5){
				goto movimiento;
			}
			cout<<"INGRESE LA SEGUNDA DIRECCION:"<<endl;
			cout<<"1. ARRIBA."<<endl;
			cout<<"2. ABAJO."<<endl;
			cin>>opc;
			if(opc==1 && pci>=1){
				pcj=pcj+2;
				pci=pci-1;
			} else if(opc==2 && pci<=6){
				pcj=pcj+2;
				pci=pci+1;
			} else{
				goto movimiento;
			}
			break;
		case 3:
			if(pci>5){
				goto movimiento;
			}
			cout<<"INGRESE LA SEGUNDA DIRECCION:"<<endl;
			cout<<"1. DERECHA."<<endl;
			cout<<"2. IZQUIERDA."<<endl;
			cin>>opc;
			if(opc==1 && pcj<=6){
				pci=pci+2;
				pcj=pcj+1;
			} else if(opc==2 && pcj>=1){
				pci=pci+2;
				pcj=pcj-1;		
			} else{
				goto movimiento;
			}
			break;
		case 4:
			if(pcj<2){
				goto movimiento;
			}
			cout<<"INGRESE LA SEGUNDA DIRECCION:"<<endl;
			cout<<"1. ARRIBA."<<endl;
			cout<<"2. ABAJO."<<endl;
			cin>>opc;
			if(opc==1 && pci>=1){
				pcj=pcj-2;
				pci=pci-1;
			} else if(opc==2 && pci<=6){
				pcj=pcj-2;
				pci=pci+1;	
			} else{
				goto movimiento;
			}
			break;
	}
	J = false;
	goto movimiento;
}
