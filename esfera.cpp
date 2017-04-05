#include "esfera.h"

esfera::esfera()
{
}
esfera::esfera(vector po,float ra)
{
	posicion=po;
	radio=ra;
}


esfera::~esfera(void)
{
}
void esfera::interseccion(rayo r,float&t,bool&res)
{
	vector e,d,e_c,dosd;
	float a,b,c,t0,t1,descri;
	res=false;
	t=INFINITE;
	e=r.getpos();
	d=r.getdirec();
	a=d.productoscalar(d);
	e_c=e.resta_de_vectores(posicion);
	dosd=d.per_escalar(2);
	b=dosd.productoscalar(e_c);
	c=e_c.productoscalar(e_c)-radio*radio;
	//cout<<a<<"t^2"<<"+"<<b<<"t"<<"+"<<c<<endl;
	descri=b*b-4*a*c;
	if(descri>0.0)
	{
	 t0=(b*(-1)+ sqrt(b*b-4*a*c))/(2*a);
	 t1=(b*(-1)- sqrt(b*b-4*a*c))/(2*a);
	 if((t0 > 0.0) && (t0 < t))
	 {
		 t=t0;
		 res=true;
	 }

	 if((t1 > 0.0) && (t1 < t))
	 {
		 t=t1;
		 res=true;
	 }
	}

}
void esfera::setpos(vector a)
{
	posicion=a;
}
void esfera::setra(float a)
{
	radio=a;
}