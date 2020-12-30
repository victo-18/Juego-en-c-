#ifndef HH_Asteroide
#define HH_Asteroide
class Asteroide: public Nave 
{
	private:
	   int x,y;	
		
	public:
	    Asteroide();
	    ~Asteroide();
	    Asteroide(int _x, int _y);
	    void gotoxy(int x,int y);
	    void pintarAsteroide();
	    void moverAsteroide();
	    void colicion(class Nave &N);
	   
		
};
#endif
