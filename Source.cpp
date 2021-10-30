#include <iostream>
#include <string>
using namespace std;
class Point{
	int x, y;
public:
	void setx(int newx){x = newx;}
	void sety(int newy){y = newy;}
	int getx(){return x;}
	int gety(){return y;}
	void output(){cout << "x=" << x <<" y=" << y << endl;}
	Point(int newx = 0, int newy = 0){x = newx;y = newy;}
};
class Circle{
	int radius;
	Point centr;
	Point* p_centr;
public:
	void setradius(int newradius){radius = newradius;}
	int getradius(){return radius;}
	void output()
	{	cout << "radius=" << radius << " centr: ";
		centr.output();
		cout << endl;}
	int dlina(){return 2 * 3.14 * radius;}
	int ploshad(){return (3.14 * radius * radius);}
	Circle(int newradius=1, int newx=0, int newy=0) : p_centr(new Point(newx,newy)){radius = newradius;}
	~Circle(){delete p_centr;cout << "Deleted dynamic array";}
	//Circle(int newradius=1, int newx=0, int newy=0) : centr(newx,newy)
	//{
	//	radius = newradius;
	//}
};
class Car
{string marka, colour, number;
	int  probeg;
public:
	void setmarka(string newmarka){marka = newmarka;}
	void setcolour(string newcolour){colour = newcolour;}
	void setnumber(string newnumber){number = newnumber;}
	void setprobeg(int newprobeg){probeg = newprobeg;}
	string getmarka(){return marka;}
	string getcolour(){return colour;}
	string getnumber(){return number;}
	int getprobeg(){return probeg;}
	void information()
	{
		cout << "marka " << marka << " tsvet " << colour << " number " << number << " probeg " << probeg << endl;
	}
	Car(string newmarka = "Jiguul", string newcolour = "Red", string newnumber = "a000aa", int newprobeg=300000)
	{marka = newmarka;	colour = newcolour;	number = newnumber;	probeg = newprobeg;}
};
class Man
{	string fullname;
	int age;
	Car *vehicle;
public:
	void setname(string newfullname){fullname = newfullname;}
	void setage(int newage){age = newage;}
	void setcar(Car* newvehicle){vehicle = newvehicle;}
	string getname(){return fullname;}
	int getage(){return age;}
	Car *getcar(){return vehicle;}
	void information()
	{		cout << "Name= " << fullname << " Age= " << age;
		if (vehicle == NULL)
		{	cout << " Car= none";
			cout << endl;}
		else
		{	cout << " Car: ";
			vehicle->information();
			cout << endl;}
	}
	Man() : fullname("Petrov Petr Petrovich"), age(30), vehicle(NULL){}
	Man(string newfullname, int newage, Car *newvehicle) : fullname(newfullname), age(newage), vehicle(newvehicle){}
};
void main()
{
	Circle c;
	cout << "dlina= " << c.dlina() << endl << "Ploshad= " << c.ploshad() << endl;
	c.output();
	Car machina;
	Car machina2("BMW", "Red", "b111aa", 40000);
	machina.information();
	machina2.information();
	Man ivanov("Ivanov Petr Michailovich", 29, NULL);
	Car toyota("Toyota", "White", "a123bv", 255000);
	ivanov.setcar(&toyota);
	/*Man ivanova("Ivanova Klavdia Sergeevna", 25, &toyota);*/
	Man ivanova("Ivanova Klavdia Sergeevna", 25, ivanov.getcar());
	toyota.setprobeg(260000);
	ivanov.information();
	ivanova.information();
	Man noname;
	noname.information();

}