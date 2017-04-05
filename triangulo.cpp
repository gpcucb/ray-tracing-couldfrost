#include "triangulo.h"


triangulo::triangulo(void)
{
}
triangulo::triangulo(vector a,vector b,vector c)
{
	a=a;
	b=b;
	c=c;
}

triangulo::~triangulo(void)
{
}
void triangulo::interseccion(rayo r,bool&res,float&tt)
{
	float am,bm,cm,d,e,f,g,h,i,j,k,l,beta,gama,t,M;
	tt=0;
	res=false;
	am=a.getx()-b.getx();
	bm=a.gety()-b.gety();
	cm=a.getz()-b.getz();
	d=a.getx()-c.getx();
	e=a.gety()-c.gety();
	f=a.getz()-c.getz();
	g=r.getdirec().getx();
	h=r.getdirec().gety();
	i=r.getdirec().getz();
	j=a.getx()-r.getpos().getx();
	k=a.gety()-r.getpos().gety();
	l=a.getz()-r.getpos().getz();
     M=am*(e*i-h*f)+bm*(g*f-d*i)+cm*(d*h-e*g);
	 beta=(j*(e*i-h*f)+k*(g*f-d*i)+l*(d*h-e*g))/M;
	 gama=(i*(am*k-j*bm)+h*(j*cm-am*l)+g*(bm*l-k*cm))/M;
	 t=(-1)*((f*(am*k-j*bm)+e*(j*cm-am*l)+d*(bm*l-k*cm))/M);
	 if ((beta > 0) && (gama > 0) && ((beta + gama) < 1))
	 {
      res = true;
      tt=t;
	 }

}
