
//=======Nombre del programa: Cuenta moneda 
//====Archivo: BangueraJosselyn-CuentaMoneda.cpp
//====Autor: Banguera Josselyn
//====Fecha de creacion: 02-05-2022
//====Fecha de ultima actualizacion: 13-05-2022

#include<iostream>
using namespace std;
int main()
{
	int BJ_n, BJ_c=0, BJ_c1=0, BJ_c2=0;
       float BJ_x,BJ_a=0, BJ_a1=0, BJ_a2=0;
       cout<<"¿Cuantas monedas va a ingresar?: ";
       cin>>BJ_n;
       do{
      cout<<"Ingrese el valor de la moneda (0.10, 0.25): ";
      cin>>BJ_x;
      BJ_c=BJ_c+1;
      BJ_a=BJ_a+BJ_x;
      if(BJ_x==0.10){

	      BJ_c1=BJ_c1+1;
	      BJ_a1=BJ_a1+BJ_x;
      }else{
	      BJ_c2=BJ_c2+1;
	      BJ_a2=BJ_a2+BJ_x;
      }
       }while(BJ_c<BJ_n);
       cout<<"El resultado es :"<<endl;
       cout<<"Cantidad de monedas ingresadas :"<<BJ_c<<endl;
       cout<<"Total del dinero contado :"<<BJ_a<<endl;
       cout<<"Cantidad de monedas de 0.10ctv ingresadas :"<<BJ_c1<<endl;
       cout<<"Total del dinero de monedas de 0.10ctv :"<<BJ_a1<<endl;
       cout<<"Cantidad de monedas de 0.25ctv ingresadas :"<<BJ_c2<<endl;
       cout<<"Total del dinero de monedas de 0.25ctv :"<<BJ_a2<<endl;


cout<<"//=======Nombre del programa: Cuenta Moneda "<<endl;
cout<<"//====Archivo: BangueraJosselyn-CuebtaMoneda.cpp"<<endl;
cout<<"//====Autor: Banguera Josselyn"<<endl;
cout<<"//====Fecha de creacion: 02-05-2022"<<endl;
cout<<"//====Fecha de ultima actualizacion: 13-05-2022"<<endl;
       return(0);
}

