#include<stdio.h>
#include<conio.h>
#include <iostream>
#include<windows.h>
#include"Nave.h"
#include"Asteroide.h"
//movimiento por teclado
#define ARRIBA 72
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75
using namespace std;

int main()
{

	Nave nave1(7,7,3,3);
	cout<<"soy "<<nave1.getEnergia()<<endl;
	nave1.OcultarCursor();
    nave1.pintarNave();
    nave1.escenario();
    nave1.barraEnergia();
    nave1.setEnergia(3);
    nave1.setVidas(3);
    
    Asteroide aste1(10,4);
    Asteroide aste2(4,6);
    Asteroide aste3(8,15);
	Asteroide aste4(30,10);
    Asteroide aste5(18,20);
    Asteroide aste6(5,9);
    
	bool game_Over = false;
	
    
	while(!game_Over)
	{
	   aste1.moverAsteroide();
	   aste2.moverAsteroide();
	   aste3.moverAsteroide();
	   aste4.moverAsteroide();
	   aste5.moverAsteroide();
	   aste6.moverAsteroide();
	   
	   aste1.colicion(nave1);
	   aste2.colicion(nave1);
	   aste3.colicion(nave1);
	   aste4.colicion(nave1);
	   aste5.colicion(nave1);
	   aste6.colicion(nave1);
	   	
	   nave1.morir();
	   nave1.mover();
		Sleep(50);
		
		if(nave1.getEnergia()==0)
		{
			cout<<"GAME OVER LOSER"<<endl;
			break;
		   }  
		   
   }
    
	return 0;
}
