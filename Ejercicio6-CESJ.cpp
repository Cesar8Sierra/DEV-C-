#include <iostream>

using namespace std;

int main (){
	int A[9] = {12, 20, -5, 0, 2, 9, 13, 15, 21};
	int pasada=0, salto=9, separado;
	
	cout<<"ORDENAMIENTO POR MERGE SORT."<<endl;
	cout<<"\nMOSTRANDO TABLERO:"<<endl;
	for(int k=0; k<9; k++){
		cout<<A[k]<<'\t';
	}
	
	while(salto>1){
		
		salto = salto/2;
		cout<<'\n'<<salto<<endl;
		pasada++;
		int j=0;
		cout<<"\n\nPASADA #"<<pasada<<endl;
		for(int i=0; i<pasada*2; i++){
			separado = (salto+1)*(i+1);
			for(j; j<separado; j++){
				cout<<A[j]<<"  ";
			}
			cout<<"    ";
		}
	}
}