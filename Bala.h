#ifndef HH_Bala
#define HH_Bala
class Bala
{
	private:
	int x,y;
	public:
		Bala();
		~Bala();
		Bala(int _x, int _y);
		void mover();
		 void setX( int _x);
		 int getX();
		 void setY(int _y);
		 int getY();
		 
};
#endif
