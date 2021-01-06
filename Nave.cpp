#include<iostream>
#include"Nave.h"
#include<stdio.h>
#include<conio.h>
#include <iostream>
#include<windows.h>
//movimiento de teclado
#define ARRIBA 72
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75
using namespace std;
//================ Constructores de la clase =====================================//
Nave::Nave(){};
Nave::~Nave(){} ;
Nave::Nave(int _x, int _y, int _energia, int _vidas)
{
	 x =_x;
	 y =_y;
	 energia = _energia;
	 vidas = _vidas;
}
//================ Metodos de2 la clase ==============================================//
void Nave::pintarNave()
{
	gotoxy(x,y);
	printf("  %c ",30);
	gotoxy(x,y+1);
	printf(" %c%c%c ", 40,207,41);
	gotoxy(x,y+2);
	printf(" %c%c%c ", 30,190,30);
	
}
void Nave::borrar()
{
	gotoxy(x,y);
	printf("       ");
	gotoxy(x,y+1);
	printf("       ");
	gotoxy(x,y+2);
	printf("       ");

}
void Nave::mover()
{
	if(kbhit())
	{
		 char tecla = getch();
		 gotoxy(x,y);
		 borrar();
		 if (tecla == IZQUIERDA && x > 3)  x--;
		 if(tecla == DERECHA && x+6 < 77) x++;
		 if(tecla == ARRIBA && y > 4) y--;
		 if(tecla == ABAJO && y +3 < 30) y++;
		 //if(tecla=='m')energia--;
		 pintarNave();
		 barraEnergia();
    }
	   
}
void Nave::gotoxy(int x,int y)
{
	HANDLE hCon;
	hCon =  GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);
}

void Nave::OcultarCursor()
{
	HANDLE hCon;
	hCon =  GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hCon, &cci);
	
}
void Nave::escenario()
{
	for(int i=2;i<78;i++)
	{
		gotoxy(i,3);
		printf("%c",205);
		gotoxy(i,30);
		printf("%c",205);
		for(int i=4;i<30;i++)
		{
			gotoxy(2,i);
			printf("%c",186);
			gotoxy(77,i);
			printf("%c",186);
		}
		gotoxy(2,3);
		printf("%c",201);
		gotoxy(2,30);
		printf("%c",200);
		gotoxy(77,3);
		printf("%c",187);
		gotoxy(77,30);
		printf("%c",188);
	}
}
void Nave::barraEnergia()
{
	gotoxy(50,2);
	printf("Vidas: %d",vidas);
	gotoxy(64,2);
	printf("Energia: ");
	gotoxy(70,2);
	printf("      ");
	for(int i= 0;i < energia;i++)
	{
		gotoxy(70+i,2);
		printf("%c",223);
	}
	
}
//Realizar cambio en funcion morir
void Nave::morir()
{
	if(energia == 0 && vidas == 0)
	{
		borrar();
		gotoxy(x,y);
		printf("   **   ");
		gotoxy(x,y+1);
		printf("  ****  ");
		gotoxy(x,y+2);
		printf("   **   ");
		Sleep(200);
		
		borrar();
		gotoxy(x,y);
		printf(" * ** *");
		gotoxy(x,y+1);
		printf("  **** ");
		gotoxy(x,y+2);
		printf(" * ** *");
		Sleep(200);
		borrar();
		vidas--;
		energia;
		barraEnergia();
		pintarNave();
	
	}
	
    
}

void Nave::setCoordenadaX(int _x)
{
   x= _x;
}
int Nave::getCoordenadaX()
{
	return x;
}

void Nave::setCoordenadaY(int _y)
{
	y = _y;
}
int Nave::getCoordenadaY()
{
	return y;
}
void Nave::setVidas(int _vidas)
{
	vidas = _vidas;
}
int Nave::getVidas()
{
	return vidas;
}
void Nave::setEnergia(int _energia)
{
	energia = _energia;
}

int Nave::getEnergia()
{
	return energia;
}









