#include"Nave.h"
#include<stdio.h>
#include<conio.h>
#include <iostream>
#include<stdlib.h>
#include<windows.h>
#include"Asteroide.h"
//movimiento teclado
#define ARRIBA 72
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75
using namespace std;

Asteroide::Asteroide(){};
Asteroide::~Asteroide(){};
Asteroide::Asteroide(int _x,int _y):x(_x),y(_y){};

void Asteroide::pintarAsteroide()
{
 gotoxy(x,y);
 printf("%c",184);	

}
void Asteroide::moverAsteroide()
{
	gotoxy(x,y);
	//y++;
	printf("*");
	y++;
	if(y > 32)
	{
		x = rand()%71 + 4;
		y =4;
		pintarAsteroide();
	}
}
