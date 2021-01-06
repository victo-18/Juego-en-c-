#include<list>
#include<stdio.h>
#include<conio.h>
#include <iostream>
#include<windows.h>
#include"Nave.h"
#include"Asteroide.h"
#include"Bala.h"
//movimiento por teclado
#define ARRIBA 72
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75

using namespace std;

void gotoxy(int x,int y)
{
	HANDLE hCon;
	hCon =  GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);
}

int main()
{

    int puntos=0;
	Nave nave1(35,20,3,3);
	nave1.OcultarCursor();
    nave1.pintarNave();
    nave1.escenario();
    nave1.barraEnergia();
  
    
     list<Asteroide*> A;
     list<Asteroide*>::iterator itA;
     for(int i=0;i<6;i++)
	 {
	 	A.push_back(new Asteroide(rand()%70 + 3, rand()%5 +4));
	 }
    
    list<Bala*> B;
    list<Bala*>::iterator it;
	bool game_Over = false;
	
    
	while(!game_Over)
	{
		gotoxy(4,2);
		printf("puntos: %d",puntos);
	   if(kbhit())
	   {
	   	char tecla=getch();
	   	if(tecla=='a')
	   	B.push_back(new Bala(nave1.getCoordenadaX()+2, nave1.getCoordenadaY()-1));
		}	
		
		for(it = B.begin();it != B.end(); it++)
		{
			(*it)->mover();
			if((*it)->fuera())
			{
				gotoxy((*it)->getX(), (*it)->getY());
				printf(" ");
				delete(*it);
				it = B.erase(it);
			}
		}
	    for(itA = A.begin() ; itA != A.end();itA++)
	    {
	    	(*itA)->moverAsteroide();
	    	(*itA)->colicion(nave1);
		}
	   for(itA = A.begin();itA !=A.end();itA++)
	   {
	   	    for(it = B.begin();it != B.end();it++)
		   {
	   		    if((*itA)->getCoorX() == (*it)->getX() && ((*itA)->getCoorY()+1==(*it)->getY()) || (*itA)->getCoorY() == (*it)->getY())
			    {
			    	gotoxy((*it)->getX(),(*it)->getY());
			    	printf(" ");
			    	delete(*it);
			    	it= B.erase(it);
			    	
			    	A.push_back(new Asteroide(rand()%70 + 3,4));
			    	gotoxy((*itA)->getCoorX(),(*itA)->getCoorY());
			    	printf(" ");
			    	delete(*itA);
			    	itA = A.erase(itA);
			    	puntos+=5;
				} 
		    }
	   }
	  
	  
	    if(nave1.getEnergia()==0 && nave1.getVidas()==0 )
       {
	     
	      break;
       }
	   nave1.morir();
	   nave1.mover();
		Sleep(50);
	 
    }
    cout<<" GAME OVER LOSER "<<endl;
    cin.get();
   
	return 0;
}
