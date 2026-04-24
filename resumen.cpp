#include <iostream>
#include <string>


using namespace std;

void comprar_boletos();
void Busqueda_dni();
void menu();

 int opc;
 int num_boleto;
 
 int num_destinos=2;
 string destinos []={"peru","italia"};
 float precios[]={300,350};
 
 struct Usuario{
 	float precio;
 	string nombre;
 	string destino;
 	int dni;
 	
 }Usu[3];

int main () {
	menu();

}

void comprar_boleto(){
	 cout<<"ingresar numero de boleto:"<<endl;
	 cin>>num_boleto;
	 
	 cout<<"ingrese los datos de los pasajeros"<<endl;
	 cout<<"nombre";
	 cin>>Usu[num_boleto-1].nombre;
	 cout<<"dni";
	 cin>>Usu[num_boleto-1].dni;
	 
	 cout<<"seleccione el destino"<<endl;
	 for(int i=0;i<num_destinos;i++){
	 	cout<<"|"<<Usu[i].destino<<"s/"<<Usu[i].precio<<endl;
	 }
	
	
}

void busqueda_dni(){

 int dni_buscar;
 cout<<"ingrese el numero de dni"<<endl;
 cin>>dni_buscar;
 
 bool encontrado = false;
 
 for(int i=0;i<3;i++){
 	if(Usu[i].dni==dni_buscar){
 		cout<<"pasajero encontrado"<<endl;
 		cout<<"nombre"<<Usu[num_boleto-1].nombre<<endl;
 		cout<<"dni"<<Usu[num_boleto-1].dni<<endl;
 		encontrado=true;
 		break;
	 }
	 if(dni_buscar!=encontrado){
	 	cout<<"no se encontro el pasajero"<<endl;
	 }
 }
}
void menu(){
	menu:
	cout<<"1 comprar boletos"<<endl;
	cout<<"2 bucqueda por dni"<<endl;
	cin>>opc;
	switch (opc){
		case 1:
			comprar_boleto();
			break;
		case 2:
			busqueda_dni();
			break;
	}goto menu;
}
