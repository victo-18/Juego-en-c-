#include"Nave.h"
#include<stdio.h>
#include<conio.h>
#include <iostream>
#include<stdlib.h>
#include<windows.h>
#include"Asteroide.h"
#include"Bala.h"
 using namespace std;
 //============== constructores de la clase ========================================================//
 Bala::Bala(){};
 Bala::~Bala(){};
 Bala::Bala(int _x ,int _y): x(_x),y(_y){};
 //=============Metodos de la clase ================================================================//
 void Bala::setX(int _x)
 {
 	x = _x;
 }
 int Bala::getX()
 {
 	return x;
 }
 void Bala::setY(int _y)
 {
 	y = _y;
 }
 int Bala::getY()
 {
 	return y;
 }
 void Bala::mover()
 {
 	gotoxy(x,y);
 	printf(" ");
     y--;
	 gotoxy(x,y);
	 printf("*");
 }
  bool Bala::fuera()
  {
  	if(y==4)
	  {
	  	return true;
	  }
	  else 
	  {
	  	return false;
	  }
  }
  
 void Bala::gotoxy(int x,int y)
{
	HANDLE hCon;
	hCon =  GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);
}


 
 
 
 
 
