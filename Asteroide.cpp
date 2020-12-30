#include"Nave.h"
#include<stdio.h>
#include<conio.h>
#include <iostream>
#include<stdlib.h>
#include<windows.h>
#include"Asteroide.h"

using namespace std;

Asteroide::Asteroide(){};
Asteroide::~Asteroide(){};
Asteroide::Asteroide(int _x,int _y): x(_x),y(_y) {};
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
//	bool move = false;
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
	/*
	if(N.getEnergia()<1 && N.getVidas()<1 )
    {

	  cout<<"GAME OVER LOSER"<<endl;
    }*/
    
}





