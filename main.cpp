#include<stdio.h>
#include<conio.h>
#include <iostream>
#include<windows.h>
#include"Nave.h"
#define ARRIBA 72
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75
using namespace std;

int main()
{
	 Nave nave1(7,7);
	nave1.OcultarCursor();
    //Nave nave1(7,7);
    nave1.pintarNave();
	bool game_Over = false;
	while(!game_Over)
	{
		
	   nave1.mover();
		Sleep(50);   
   }
   
	return 0;
}
