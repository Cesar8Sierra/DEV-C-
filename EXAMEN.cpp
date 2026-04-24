#include <iostream>

using namespace std;

int main () {
	int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, cod;
	cout<<"INGRESE SU CODIGO:"<<endl;
	cin>>cod;
	if(cod<10000000 || cod>99999999){
		cout<<"EL CODIGO ES MAYOR O MENOR DE 8 DIGITOS."<<endl;
	}else{
		cout<<"LOS VALORES SON."<<endl;
		
		dig1 = cod % 10;
		dig2 = (cod/10) % 10;
		dig3 = (cod/100) % 10;
		dig4 = (cod/1000) % 10;
		dig5 = (cod/10000) % 10;
		dig6 = (cod/100000) % 10;
		dig7 = (cod/1000000) % 10;
		dig8 = (cod/10000000);
		
		cout<<"DIG1: "<<dig1<<endl;
		cout<<"DIG2: "<<dig2<<endl;
		cout<<"DIG3: "<<dig3<<endl;
		cout<<"DIG4: "<<dig4<<endl;
		cout<<"DIG5: "<<dig5<<endl;
		cout<<"DIG6: "<<dig6<<endl;
		cout<<"DIG7: "<<dig7<<endl;
		cout<<"DIG8: "<<dig8<<endl;
	}
}
