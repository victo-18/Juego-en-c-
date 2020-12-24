
class Asteroide : public Nave
{
	private:
	   int x,y;	
		
	public:
	    Asteroide();
	    ~Asteroide();
	    Asteroide(int _x, int _y);
	    
	    void pintarAsteroide();
	    void moverAsteroide();
		
};
