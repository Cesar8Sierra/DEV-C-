#include <iostream>

using namespace std;

int main () {
	int j = 1;
	for(int i=1; i<10; i++){
		if(i % 2 == 0){
			j = 2;
		} else{
			j = 1;
		}
		cout<<j<<endl;
		system("pause");
	}
}
