//=======Nombre del programa: la edad
//====Archivo: BangueraJosselyn-laedad.cpp
//====Autor: Banguera Josselyn
//====Fecha de creacion: 02-05-2022
//====Fecha de ultima actualizacion: 13-05-2022

#include<iostream>
using namespace std;
int main()
{
	int BJ_da,BJ_ma,BJ_aa,BJ_dn,BJ_mn,BJ_an,BJ_a,BJ_m,BJ_d;
	cout<<"Ingrese la fecha actual: Dia Mes Año :";
	cin>>BJ_da>>BJ_ma>>BJ_aa;
	cout<<"Ingrese su fecha de nacimiento: Dia Mes Año :";
	cin>>BJ_dn>>BJ_mn>>BJ_an;
	if(BJ_da<BJ_dn){
		BJ_da=BJ_da+30;
		BJ_ma=BJ_ma-1;
		BJ_d=BJ_da-BJ_dn;
	}
	else{
		BJ_d=BJ_da-BJ_dn;
	}
	if(BJ_ma<BJ_mn){
		BJ_ma=BJ_ma+12;
		BJ_aa=BJ_aa-1;
		BJ_m=BJ_ma-BJ_mn;
	}
	else{
		BJ_m=BJ_ma-BJ_mn;
	}
	BJ_a=BJ_aa-BJ_an;

cout<<"//=======Nombre del programa: la edad "<<endl;
cout<<"//====Archivo: BangueraJosselyn-laedad.cpp "<<endl;
cout<<"//====Autor: Banguera Josselyn "<<endl;
cout<<"//====Fecha de creacion: 02-05-2022 "<<endl;
cout<<"//====Fecha de ultila actualizacion: 13-05-2022 "<<endl;

        cout<<"Usted tiene: " <<BJ_a<< "años" <<BJ_m<< "mese" <<BJ_d<< "BJ_y" <<BJ_d<< "dias"<<endl;
	return(0);
}
