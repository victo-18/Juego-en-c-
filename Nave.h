class  Nave{
	
	private:
	int x,y;
	
	public:
		Nave();
		~Nave();
		Nave(int_x,int _y);
		void pintarNave();
		void borrar();
		void mover();
		void gotoxy(int x,int y);
		void OcultarCursor();
	
};
