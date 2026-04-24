#include <iostream>

using namespace std;

int main () {
	inicio:
	int opc;
	float N, falta, total=0;
	cout<<"UNIDADES:"<<endl;
	cin>>opc;
	for(int i=1; i<opc; i++){
		cout<<"INGRESE LA NOTA DE LA UNIDAD "<<i<<":"<<endl;
		cin>>N;
		total += N;
	}
	falta = opc*10.5 - total;
	cout<<"TE FALTA "<<falta<<" DE NOTA EN LA ULTIMA UNIDAD."<<endl;
	system("pause");
	system("cls");
	goto inicio;
}
