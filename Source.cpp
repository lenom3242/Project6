#include <iostream>
using namespace std;
class Point
{
	int x, y, z5;
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
	Point(int newx = 0, int newy = 0)
	{
		x = newx;
		y = newy;
		cout << "P\n";
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
	Circle(int newx, int newy) : centr(newx, newy) {

	}
};
void main()
{
	Circle c(1, 1);
	system("pause");
}