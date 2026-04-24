#include<iostream>

using namespace std;

int main (){
	int opc, total=0;
	
    inicio_menu:
	cout<<"BIENVENIDO A GOOD GRILLS"<<endl;
	cout<<"************************"<<endl;
	cout<<"DESEA ALGO DE COMER?"<<endl;
	cout<<"[1] SI."<<endl;
	cout<<"[2] NO."<<endl;
	cin>>opc;
	switch(opc){
		case 1:
			comida:
			system("cls");
			cout<<"EL MENU DE HOY ES:"<<endl;
			cout<<"************************"<<endl;
			cout<<"[1] Juane               S/15"<<endl;
			cout<<"[2] Parrilla clasica.   S/20"<<endl;
			cout<<"[3] Parrilla mixta.      S/28"<<endl;
			cout<<"[4] Churrasco.          S/22"<<endl;
			cout<<"[5] Churrasco mixto.    S/30"<<endl;
			cout<<"[6] Lomo saltado.       S/18"<<endl;
		    cout<<"************************"<<endl;
		    cin>>opc;
		    switch(opc){
		    	case 1:
		    		cout<<"HAS PEDIDO 1 JUANE:"<<endl;
		    		total = total + 15;
					break;
		    	case 2:
		    		cout<<"HAS PEDIDO 1 PARRILLA CLASICA:"<<endl;
		    		total = total + 20;
					break;
		    	case 3:
		    		cout<<"HAS PEDIDO 1 PARRILLA MIXTA:"<<endl;
		    		total = total + 28;
					break;
		    	case 4:
		    		cout<<"HAS PEDIDO 1 CHURRASCO:"<<endl;
		    		total = total + 22;
					break;
				case 5:
					cout<<"HAS PEDIDO 1 CHURRASCO MIXTO:"<<endl;
		    		total = total + 30;
					break;
		    	case 6:
		    		cout<<"HAS PEDIDO 1 LOMO SALTADO:"<<endl;
		    		total = total + 18;
					break;
			}
					cout<<"DESEA AGREGAR ALGUN PLATO MAS?"<<endl;
					cout<<"[1] SI."<<endl;
		    		cout<<"[2] NO."<<endl;
		    		cin>>opc;
		    		switch(opc){
		    			case 1:
		    				goto comida;
		    			case 2:
		    				break;
					}
				break;
		case 2:
			cout<<"NO PIDIO COMIDAS."<<endl;
			break;
	}
	cout<<"DESEA ALGO DE BEBER?"<<endl;
	cout<<"[1] SI."<<endl;
	cout<<"[2] NO."<<endl;
	cin>>opc;
	switch(opc){
		case 1:
			bebida:
			system("cls");
			cout<<"BEBIDAS DISPONIBLES"<<endl;
		    cout<<"************************"<<endl;
			cout<<"[1] copazu.             S/5"<<endl;
			cout<<"[2] chicha morada.      S/5"<<endl;
			cout<<"[3] cebada.             S/5"<<endl;
			cout<<"[4] cocona.             S/5"<<endl;
			cout<<"************************"<<endl;
			cin>>opc;
			switch(opc){
				case 1:
					cout<<"HAS PEDIDO 1 COPAZU:"<<endl;
		    		total = total + 5;
					break;
				case 2:
					cout<<"HAS PEDIDO 1 CHICHA MORADA:"<<endl;
		    		total = total + 5;
					break;
				case 3:
					cout<<"HAS PEDIDO 1 CEBADA:"<<endl;
		    		total = total + 5;
					break;
				case 4:
					cout<<"HAS PEDIDO 1 COCONA:"<<endl;
		    		total = total + 5;
					break;
			}
					cout<<"DESEA AGREGAR ALGUNA BEBIDA MAS?"<<endl;
		    		cout<<"[1] SI."<<endl;
		    		cout<<"[2] NO."<<endl;
		    		cin>>opc;
		    		switch(opc){
		    			case 1:
		    				goto bebida;
		    			case 2:
		    				break;
					}
			break;
		case 2:
			cout<<"NO PIDIO BEBIDAS."<<endl;
			break;
	}
	cout<<"TOTAL DEL PEDIDO: "<<total<<endl;
	cout<<"GRACIAS POR VENIR AHORA VAYASE!!!";
}
