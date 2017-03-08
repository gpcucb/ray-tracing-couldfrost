#include "vector.h"


vector::vector(void)
{
}


vector::~vector(void)
{
}
vector vector::suma_de_vector(vector a)
{
	a.setx(x+a.getx());
	a.sety(y+a.gety());
	a.setz(z+a.getz());
	return a;
}
vector vector::resta_de_vectores(vector a)
{
	a.setx(x-a.getx());
	a.sety(y-a.gety());
	a.setz(z-a.getz());
	return a;
}
float vector::getx()
{
	return x;
}
float vector::gety()
{
	return y;
}
float vector::getz()
{
	return z;
}
void vector::setx(float a)
{
	x=a;
}
void vector::sety(float b)
{
	y=b;
}
void vector::setz(float c)
{
	z=c;
}
void vector::mostrar()
{
	cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}