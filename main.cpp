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
	nave1.OcultarCursor();
    nave1.pintarNave();
    nave1.escenario();
    nave1.barraEnergia();
	bool game_Over = false;
	
	Asteroide aste1(10,4);
    aste1.moverAsteroide();
	
    
	while(!game_Over)
	{
	   nave1.morir();
	   nave1.mover();
		Sleep(50);   
   }
   
	return 0;
}
