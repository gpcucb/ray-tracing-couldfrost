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
vector vector::productovectorial(vector v)
{
	
	vector a;
	
	a.setx((y*v.getz())-(z*v.gety()));
	
	a.sety((z*v.getx())-(x*v.getz()));
	
	a.setz((x*v.gety())-(y*v.getx()));
	
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
	vector v;
	v.setx(x*a);
	v.sety(y*a);
	v.setz(z*a);
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