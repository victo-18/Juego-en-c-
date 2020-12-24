class  Nave{
	
	private:
	int x,y;
	int energia;
	int vidas;
	public:
		Nave();
		~Nave();
		Nave(int _x ,int _y, int _energia,int _vidas);
		void pintarNave();
		void borrar();
		void mover();
		void gotoxy(int x,int y);
		void OcultarCursor();
		void escenario();
		void barraEnergia();
		void morir();
	
};
