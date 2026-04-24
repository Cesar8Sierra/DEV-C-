#include <iostream>

using namespace std;

int main (){
	int A[8] = {56, 80, 59, 11, 17, 89, 33, 63};
	int pos, verdadero, menor_inicial, menor_final;
	cout<<"ORDENAMIENTO POR SELECCION."<<endl;
	cout<<"MOSTRANDO TABLERO."<<endl;
	for(int k=0; k<8; k++){
		cout<<A[k]<<'\t';
	}
	for(int i=0; i<8; i++){
		cout<<"\n\nPASADA #"<<i+1<<endl;
		cout<<"MENOR = A["<<i+1<<"] = "<<A[i]<<endl;
		menor_inicial = A[i];
		menor_final = menor_inicial;
		verdadero = 0;
		for(int j=i; j<7; j++){
			cout<<"MENOR < A["<<j+2<<"] ==> "<<menor_final<<"<"<<A[j+1]<<endl;
			if(menor_final>A[j+1]){
				cout<<"FALSO."<<endl;
				menor_final = A[j+1];
				pos = j+1;
			} else{
				cout<<"VERDADERO."<<endl;
				verdadero++;
			}
		}
		if(verdadero!=8-(i+1)){
			A[i] = menor_final;
			A[pos] = menor_inicial;
			cout<<"VALORES CAMBIADOS EN LAS POSICIONES DE A["<<i+1<<"] Y A["<<pos+1<<"]."<<endl;
		} else{
			cout<<"VALORES NO CAMBIADOS."<<endl;
		}
		for(int k=0; k<8; k++){
			cout<<A[k]<<'\t';
		}
	}
	cout<<"\n\nMOSTRANDO TABLERO ORDENADO:"<<endl;
	for(int k=0; k<8; k++){
		cout<<A[k]<<'\t';
	}
}