#include <iostream>

using namespace std;

int main (){
	int A[9] = {4, 6, 7, 1, 9, 5, 3, 8, 2};
	int salto=9, pasada=0, aux;
	cout<<"ORDENAMIENTO POR SHELL SORT."<<endl;
	do{
		cout<<"\nMOSTRANDO TABLERO."<<endl;
		for(int k=0; k<9; k++){
			cout<<A[k]<<'\t';
		}
		salto = salto/2;
		pasada++;
		cout<<"\n\nPASADA #"<<pasada;
		for(int i=0; i<=salto-1; i++){
			cout<<"\n\n\tARRELGO DE A"<<i+1;
			for(int j=salto+i; j<9; j+=salto){
				cout<<"\n\nA["<<j<<"]<A["<<j-salto<<"] => "<<A[j]<<"<"<<A[j-salto]<<endl;
				if(A[j]<A[j-salto]){
					cout<<"VERDADERO (cambian de posicion)."<<endl;
					aux = A[j];
					A[j] = A[j-salto];
					A[j-salto] = aux;
				} else{
					cout<<"FALSO (mantienen su posicion)."<<endl;
				}
				for(int k=0; k<9; k++){
					if(k==j || k==j-salto){
						cout<<A[k]<<'\t';
					} else{
						cout<<" "<<'\t';
					}
				}
			}
		}
	}while(salto>1);
	cout<<"\n\nMOSTRANDO DATOS ORDENADOS:"<<endl;
	for(int i=0; i<9; i++){
		cout<<A[i]<<'\t';
	}
}