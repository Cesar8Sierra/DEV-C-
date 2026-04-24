#include <iostream>
using namespace std;

struct mapa{
	
	int pos_x;
	int pos_y;
	
};

const int x_mapa=20, y_mapa=20;

int main (){
	int mapa[x_mapa][y_mapa] = {0,0,0,0,0,0,0};
//	for(int i=0; i<20; i++){
//		for(int j=0; j<20; j++){
//			mapa[i][j] = 0;
//			cout<<mapa[i][j];
//		}
//		cout<<'\n';
//	}
	mapa[10][10] = 7;
	
	for(int i=0; i<x_mapa; i++){
		for(int j=0; j<y_mapa; j++){
			if(i==0 || i==19 || j==0 || j==19){
				cout<<0<<" ";
			} else{
				cout<<"  ";
			}
		}
		cout<<'\n';
	}
}