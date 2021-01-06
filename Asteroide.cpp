#include"Nave.h"
#include<stdio.h>
#include<conio.h>
#include <iostream>
#include<stdlib.h>
#include<windows.h>
#include"Asteroide.h"
using namespace std;

//==============Constructores de la clase =============================================//
Asteroide::Asteroide(){};
Asteroide::~Asteroide(){};
Asteroide::Asteroide(int _x,int _y): x(_x),y(_y) {};
//=============== Metodos de la clase ================================================//
void Asteroide::setCoorX(int _x)
{
	x = _x; 
}
int Asteroide::getCoorX()
{
	return x;
}
void Asteroide::setCoorY(int _y)
{
	y = _y;
}
int Asteroide::getCoorY()
{
	return y;
}

void Asteroide::gotoxy(int x,int y)
{
	HANDLE hCon;
	hCon =  GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);
}

void Asteroide::pintarAsteroide()
{
 gotoxy(x,y);
 printf("%c",184);	

}

void Asteroide::moverAsteroide()
{

	  gotoxy(x,y);
	  printf(" ");
	  y++ ;
	  if(y > 29)
	  {
		  x = rand()%71 + 4;
		  printf(" ");
	      y =4;
	  }
      pintarAsteroide();
}
//analizar funcionamiento funcion colicion
void Asteroide::colicion(class Nave &N)
{
	if(x >= N.getCoordenadaX() && x < N.getCoordenadaX()+6 && y >= N.getCoordenadaY() && y < N.getCoordenadaY()+2)
	
	{
		N.V();
		N.Ener();
		N.borrar();
		N.pintarNave();
		N.barraEnergia();
		x = rand()%71 + 4;
		y =4;
	}
	
}





