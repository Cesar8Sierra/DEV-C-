#include <iostream>

using namespace std;

int main () {
	int tam=5;
	int X[tam][tam];
	int PrimeroX=0, PrimeroY=0;
	int CentralX, CentralY;
	int UltimoX=tam-1, UltimoY=tam-1;
	int aux=tam*tam, dato_buscar, flag=0, iteraciony=0, iteracionx=0;
	
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
	for(int l=PrimeroX; l<=UltimoX && flag==0; l++){
		if(dato_buscar<=X[l][PrimeroY] && dato_buscar>=X[l][UltimoY]){
			cout<<"DATO ENCONTRADO EN LA FILA "<<l+1<<", ";
			do{
				CentralX=l;
				CentralY=(PrimeroY+UltimoY)/2;
				
				if(X[CentralX][CentralY]==dato_buscar){
					flag=1;
				}
				if(X[CentralX][CentralY]<dato_buscar){
					UltimoY = CentralY - 1;
				}
				if(X[CentralX][CentralY]>dato_buscar){
			    	PrimeroY = CentralY + 1;
				}
				iteraciony++;
			} while(PrimeroY<=UltimoY && flag==0);
		}
		iteracionx++;
	}
	if(flag==0){
		cout<<"DATO NO ENCONTRADO:"<<endl;
	}
	else{
		
		cout<<"COLUMNA "<<CentralY+1<<endl;
		cout<<"DATO ENCONTRADO EN "<<iteraciony<<" ITERACIONES PARA DO WHILE."<<endl;
		cout<<"DATO ENCONTRADO EN "<<iteracionx<<" ITERACIONES PARA FOR."<<endl;
	}
}
