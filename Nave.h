#ifndef HH_Nave
#define HH_Nave
class  Nave{
	
	private:
	int x,y;
	int energia;
	int vidas;
	
	public:
		
		Nave();
		~Nave();
		Nave(int _x ,int _y, int _energia,int _vidas);
		
		void setVidas(int _vidas);
		int getVidas();
		void setCoordenadaX(int _x);
		int getCoordenadaX();
		void setCoordenadaY(int _y);
		int getCoordenadaY();
		void setEnergia(int _energia);
		int  getEnergia();
		
		void pintarNave();
		void borrar();
		void mover();
		void V(){vidas--;}
		void Ener(){energia--;}
		
		void gotoxy(int x,int y);
		void OcultarCursor();
		void escenario();
		void barraEnergia();
		void morir();
	
};
#endif
