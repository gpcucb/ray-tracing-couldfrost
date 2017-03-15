#include "esfera.h"


esfera::esfera(void)
{
}


esfera::~esfera(void)
{
}
void esfera::interseccion(rayo r)
{
	vector e,d,e_c,dosd;
	float a,b,c;
	e=r.getpos();
	d=r.getdirec();
	a=d.productoscalar(d);
	e_c=e.resta_de_vectores(posicion);
	dosd=d.per_escalar(2);
	b=dosd.productoscalar(e_c);
	c=e_c.productoscalar(e_c)-radio*radio;
	cout<<a<<"t^2"<<"+"<<b<<"t"<<"+"<<c<<endl;

}
void esfera::setpos(vector a)
{
	posicion=a;
}
void esfera::setra(float a)
{
	radio=a;
}