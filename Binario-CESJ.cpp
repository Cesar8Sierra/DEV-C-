#include <iostream>

using namespace std;

int main () {
	int tam=5;
	int X[tam][tam];
	int PrimeroX=0, PrimeroY=0;
	int CentralX, CentralY;
	int UltimoX=tam-1, UltimoY=tam-1;
	int aux=tam*tam, dato_buscar, flag=0, iteracion=0;
	
	cout<<"MOSTRAR TABLERO CON VALORES PREDETERMINADOS."<<endl;
	
	for(int i=0; i<tam; i++){
		cout<<'\n';
		for(int j=0; j<tam; j++){
			X[i][j] = aux;
			aux -= 1;
			cout<<X[i][j]<<'\t';
		}
		cout<<'\n';
	}
	cout<<"\nBUSCAR UN DATO DEL TABLERO:"<<endl;
	cin>>dato_buscar;
	do{
		CentralX=(PrimeroX+UltimoX)/2;
		CentralY=(PrimeroY+UltimoY)/2;
		
		for(int i=PrimeroX; i<=UltimoX; i++){
			if(X[i][CentralY]==dato_buscar){
				flag=1;
			}
		}
		for(int j=PrimeroY; j<=UltimoY; j++){
			if(X[CentralX][j]==dato_buscar){
				flag=1;
			}
		}
		iteracion++;
	} while(PrimeroX<=UltimoX && PrimeroY<=UltimoY && flag==0);
	
	if(flag==0){
		cout<<"DATO NO ENCONTRADO:"<<endl;
	}
	else{
		cout<<"DATO ENCONTRADO EN :"<<iteracion<<"-->ITERACIONES:"<<endl;
	}
}
