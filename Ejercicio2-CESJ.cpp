#include <iostream>

using namespace std;

int main (){
	int A[7] = {8, 9, 3, -1, 6, 1, 2};
	int aux, falso, flag=0, iteracion=0;
	cout<<"ORDENAMIENTO POR INTERCAMBIO MENOR."<<endl;
	cout<<"MOSTRANDO DATOS:"<<endl;
	for(int i=0; i<7; i++){
		cout<<A[i]<<'\t';
	}
	
	for(int i=1; i<7 && flag ==0; i++){
		iteracion++;
		cout<<"\n\n\tPASADA #"<<i;
		falso=0;
		for(int j=5; j>=0 && flag ==0; j--){
			cout<<"\n\nA["<<j+1<<"]>A["<<j+2<<"] => "<<A[j]<<">"<<A[j+1]<<endl;
			if(A[j]>A[j+1]){
				cout<<"VERDADERO (cambian de posicion)."<<endl;
				aux = A[j];
				A[j] = A[j+1];
				A[j+1] = aux;
			} else{
				cout<<"FALSO (mantienen su posicion)."<<endl;
				falso++;
			}
			for(int k=0; k<7; k++){
				cout<<A[k]<<'\t';
			}
			if(falso==6){
				flag = 1;
			}
		}
	}
	
	cout<<"\n\nMOSTRANDO DATOS ORDENADOS:"<<endl;
	for(int i=0; i<7; i++){
		cout<<A[i]<<'\t';
	}
	cout<<"\nORDENADO EN "<<iteracion<<" ITERACIONES O VUELTAS.";
}