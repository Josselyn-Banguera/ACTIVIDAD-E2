//=======Nombre del programa: Punto de venta
//====Nombre del archivo: BangueraJosselyn-Compara.cpp
//====Autor: Banguera Josselyn
//====Fecha de elaboracion: 02-05-2022
//====Fecha de ultima actualizacion: 13-05-2022

#include<iostream>
using namespace std;
int main()
{
	int BJ_c=0, BJ_P;
	float BJ_A=0,BJ_x,BJ_Tb,BJ_Piva,BJ_Pdsc,BJ_iva=0.12,BJ_dsc=0.30,BJ_vt;
	cout<<"Ingrese la cantidad de productos: ";
	cin>>BJ_P;
	do{
		cout<<"Ingrese el valor de los productos: ";
		cin>>BJ_x;
		BJ_c=BJ_c+1;
		BJ_A=BJ_A+BJ_x;
		BJ_Piva=BJ_A*BJ_iva;
		cout<<"El valor del iva de la compra es de: $"<<BJ_Piva<<endl;
		BJ_Pdsc=BJ_A*BJ_dsc;
		cout<<"El valor del descuento de su compra es de:$"<<BJ_Pdsc<<endl;
		BJ_Tb=BJ_Piva+BJ_Pdsc;
	}while(BJ_c<BJ_P);
	if(BJ_Tb==BJ_A){
		cout<<"Su compra aplica para un descuento: "<<BJ_Tb<<endl;
	BJ_iva=BJ_Tb*BJ_Piva/100;
	BJ_dsc=BJ_Tb*BJ_Pdsc/100;
}else{
	BJ_vt=BJ_A+BJ_Piva-BJ_Pdsc;


cout<<"//======Nombre del programa: Punto de venta"<<endl;
cout<<"//====Nombre del archivo: BangueraJossely-PuntoVenta.cpp "<<endl;
cout<<"//====Autor: Banguera Josselyn "<<endl; 
cout<<"//====Fecha de elaboracion: 02-05-2022 "<<endl;
cout<<"//====Fecha de ultima actualizacion: 13-02-2022 "<<endl;


	cout<<"El valor total es de:$ "<<BJ_vt<<endl;
}
return(0);
}
