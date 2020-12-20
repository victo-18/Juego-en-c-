#include<stdio.h>
#include<conio.h>
//#include <iostream>
#include<windows.h>
#define ARRIBA 72
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75

//Posiciona en pantalla 
void gotoxy(int x,int y)
{
	HANDLE hCon;
	hCon =  GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);
}

void OcultarCursor()
{
	HANDLE hCon;
	hCon =  GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hCon, &cci);
	
	
	
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	OcultarCursor();
	int x =10, y = 10;
	gotoxy(x,y);
	printf("*");
	bool game_Over = false;
	while(!game_Over)
	{
		
	   
		Sleep(50);   
   }
   
	return 0;
}
