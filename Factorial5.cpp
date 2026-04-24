#include <iostream>

using namespace std;

int main (){
	inicio:
	int num, fact=1;
	cout<<"INGRESE EL FACTORIAL:"<<endl;
	cin>>num;
	for(int i=num; i>0; i--){
		fact = fact*i;
	}
	cout<<"EL FACTORIAL DE "<<num<<" ES "<<fact;
	sleep(2);
	system("cls");
	goto inicio;
}