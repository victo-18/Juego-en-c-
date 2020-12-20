#include<iostream>
#include"Nave.h"
using namespace std;

Nave::Nave();
Nave::~Nave();
Nave::Nave(int _x, int _y)
{
	this-> x=_x;
	this_> y=_y;
}
void Nave::pintaNave()
{
	gotoxy(x,y);}
	printf("  %c",30);
	gotoxy(x,y+1);
	printf(" %c%c%c", 40,207,41);
	gotoxy(x,y+2);
	printf(" %c%c %c%c", 30,190,30);
	
}
void Nave::borrar()
{
	gotoxy(x,y);
	printf("     ");
	gotoxy(x,y+1);
	printf("     ");
	gotoxy(x,y+2);
	printf("     ");

}
void Nave::mover()
{
	if(kbhit())
	{
		 char tecla = getch();
		 gotoxy(x,y);
		 borrar();
		 if (tecla == IZQUIERDA) x--;
		 if(tecla == DERECHA) x++;
		 if(tecla == ARRIBA) y--;
		 if(tecla == ABAJO) y++;
		 pintarNave();
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
