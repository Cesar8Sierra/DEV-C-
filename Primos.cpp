#include <iostream>

using namespace std;

int main() {
	int num;
	cout<<"INGRESE UN NUMERO:"<<endl;
	cin>>num;
	cout<<"SUS NUMEROS PRIMOS SON:"<<endl;
	for(int i=2; i<=num; i++){
		if(num%i==0){
			cout<<i<<endl;
			num = num/i;
			i--;
		}
	}
}
