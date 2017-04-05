#include "vector.h"

vector::vector()
{
}
vector::vector(float a,float b,float c)
{
	x=a;
	y=b;
	z=c;
}


vector::~vector(void)
{
}
vector vector::suma_de_vector(vector a)
{
	vector r(x+a.getx(),y+a.gety(),z+a.getz());
	return r;
}
vector vector::resta_de_vectores(vector a)
{
	vector r(x-a.getx(),y-a.gety(),z-a.getz());
	return r;
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
vector vector::productovectorial(vector v)
{
	
	
	
	vector a((y*v.getz())-(z*v.gety()),(z*v.getx())-(x*v.getz()),(x*v.gety())-(y*v.getx()));
	
	return a;
}
float vector::modulo2()
{
	float a;
	a=sqrt(x*x+z*z+y*y);
	return a;
}
float vector::productoscalar(vector v)
{
	float i,j,k,r;
	i=x*v.getx();
	j=y*v.gety();
	k=z*v.getz();
	r=i+j+k;
	return r;

}
vector vector::per_escalar(float a)
{
	vector v(x*a,y*a,z*a);
	return v;
}
void vector::ingresar()
{
	cout<<"ingresar x:"<<endl;
	cin>>x;
	
	cout<<"ingresar y:"<<endl;
	cin>>y;
	
	cout<<"ingresar z:"<<endl;
	cin>>z;
}