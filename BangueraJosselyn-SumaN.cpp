//=======Nombre del programa: Suma de dos numeros
//====Archivo: BangueraJosselyn-SumaN.cpp
//====Autor: Banguera Josselyn
//====Fecha de elaboracion: 02-05-2022
//====Fexha de ultima actualizacion: 13-05-2022
#include<iostream>
using namespace std;

int main()
{
	int BJ_c=0, BJ_n;
	float BJ_s=0, BJ_x;
	cout<<"Ingrese la cantidad de numeros a sumar : ";
	cin>>BJ_n;
	do{
         
		cout<<"Ingrese un numero :";
		cin>>BJ_x;
		BJ_c=BJ_c+1;
		BJ_s=BJ_s+BJ_x;
	}while(BJ_c<BJ_n);

cout<<"//=======Nombre del programa: Suma de dos numeros"<<endl;
cout<<"//====Archivo: BangueraJosselyn-SumaN.cpp"<<endl;
cout<<"//====Autor: Banguera Josselyn"<<endl;
cout<<"//====Fecha de elaboracion: 02-05-2022"<<endl;
cout<<"//====Fecha de ultima actializacion: 14-05-2022"<<endl;

	cout<<"La suma de los numeros es :"<<BJ_s<<endl;
	return(0);
}
