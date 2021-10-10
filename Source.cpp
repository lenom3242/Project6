#include <iostream>
using namespace std;
class Point
{
	int x, y;
public:
	void setx(int newx)
	{
		x = newx;
	}
	void sety(int newy)
	{
		y = newy;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
	void output()
	{
		cout << "x=" << x <<"\ny=" << y << endl;
	}
	Point(int newx = 0, int newy = 0)
	{
		x = newx;
		y = newy;
	}
};
class Circle
{
	int radius;
	Point centr;
public:
	void setradius(int newradius)
	{
		radius = newradius;
	}

	int getradius()
	{
		return radius;
	}
	void output()
	{
		cout << "radius=" << radius << "centr=";
		centr.output();
		cout << endl;
	}
	int dlina()
	{
		return 2 * 3.14 * radius;
	}
	int ploshad()
		return 3.14 * radius * radius;
	Circle(int newradius=1, int newx=0, int newy=0) : centr(newx, newy), radius(newradius)
	{
		radius = newradius;
	}
	
};
void main()
{
	Circle c(1,1,1);
}