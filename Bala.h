#ifndef HH_Bala
#define HH_Bala
class Bala: public Asteroide
{
	private:
	int x,y;
	public:
		bool fuera();
		Bala();
		~Bala();
		Bala(int _x, int _y);
		void mover();
		void gotoxy(int x,int y);
		void setX( int _x);
		int getX();
		void setY(int _y);
		int getY();
		 
};
#endif
