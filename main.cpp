#include <iostream>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#define x 22
using namespace std;

struct
{
	int Espacio;
	
}NProceso[x];


int main()
{
	int j,h;
	int Moneda,i;
	int ProN=0,ConsN=0;//Numero de consumidos o productos
	int ContPro=0,ContCons=0;// contador de numero
	for(i=0;i<22;i++){
		NProceso[i].Espacio=0;
	}
	do{
		Moneda=(rand()%3)-1;
		
		switch(Moneda){
			
		case 0:
			cout<<"\nProductor TRABAJANDO\t Consumidor Dormido"<<endl;
			cout<<"1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22"<<endl;
			if(ProN>=22){
				for(j=0;j<22;j++){
					cout<<NProceso[j].Espacio<<"  ";
				}
				cout<<"\n No es posible insertar mas";
			}
			Moneda=(rand()%4)+3;
			ProN=ProN+Moneda;
			if(ProN<25){
				for(h=0;h<=Moneda;h++){
					NProceso[ContPro].Espacio=1;
					if(ContPro<22){
						ContPro++;
					}
					if(ContPro>=22){
						ContPro=0;
					}
				}
				for(j=0;j<22;j++){
					cout<<NProceso[j].Espacio<<"  ";
				}
			}
			
			Sleep(10000);
			
		case 1:
			cout<<"\nProductor Dormido\t Consumidor TRABAJANDO"<<endl;
			cout<<"1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20 21 22"<<endl;
			if(ProN==0){
				for(j=0;j<22;j++){
					cout<<NProceso[j].Espacio<<"  ";
				}
				cout<<"\n No es posible Consumir mas";
			}
			Moneda=(rand()%4)+3;
			ConsN=ConsN+Moneda;
			if(ProN<24 && ProN!=0){
				for(h=0;h<=Moneda;h++){
					NProceso[ContCons].Espacio=0;
					if(ContCons<22){
						ContCons++;
					}
					if(ContCons>=22){
						ContCons=0;
					}
				}
				for(j=0;j<22;j++){
					cout<<NProceso[j].Espacio<<"  ";
				}
			}
			else
			   ContCons=ContCons-Moneda;
			Sleep(10000);
		}
	}while(!kbhit());
	char tecla = getch();
	return 0;
}
