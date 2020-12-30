#include"Nave.h"
#include<stdio.h>
#include<conio.h>
#include <iostream>
#include<stdlib.h>
#include<windows.h>
#include"Asteroide.h"
 uisng namespace std;
 //============== constructores de la clase ========================================================//
 Bala::Bala(){};
 Bala::~Bala(){};
 Bala::Bala(int _x ,int _y): x(_x),Y(_y){};
 //=============Metodos de la clase ================================================================//
 void Bala::setX()
 {
 	x = _x;
 }
 int Bala::getX()
 {
 	return x;
 }
 vois Bala::setY()
 {
 	y = _y;
 }
 int Bala::getY()
 {
 	return y;
 }
 
