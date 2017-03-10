#include "camara.h"


camara::camara(void)
{
}


camara::~camara(void)
{
}
vector camara::vectorw()
{
	vector a,r=e.resta_de_vectores(center);
	a.setx(r.getx()/r.modulo2());
	a.sety(r.gety()/r.modulo2());
	a.setz(r.getz()/r.modulo2());
	return a;
}
vector camara::vectoru()
{
	vector a,r=up.productovectorial(vectorw());
	a.setx(r.getx()/r.modulo2());
	a.sety(r.gety()/r.modulo2());
	a.setz(r.getz()/r.modulo2());
	return a;
}
vector camara::vectorv()
{
	vector a;
	a=vectorw().productovectorial(vectoru());
	return a;
}
vector camara::calcular_distan(float i ,float j,float nx,float ny)
{
	float b,l,r,t,u,v;
	vector dw,uu,vv;
	t=df*tan(fov/2);
	r=(t*nx)/ny;
	l=-r;
	b=-t;
	u=l+((r-l)*(i+0.5))/nx;
	v=b+((t-b)*(j+0.5))/ny;
	dw=vectorw().per_escalar(-df);
	uu=vectoru().per_escalar(u);
	vv=vectorv().per_escalar(v);
	return (dw.suma_de_vector(uu)).suma_de_vector(vv);
}
void camara::ingresarvalores()
{
	
	
	cout<<"ingresar valor e"<<endl;
	e.ingresar();
	cout<<"ingresar valor up"<<endl;
	up.ingresar();
	cout<<"ingresar valor center"<<endl;
	center.ingresar();
	cout<<"ingresar valor df"<<endl;
	cin>>df;
	cout<<"ingresar valor fov"<<endl;
	cin>>fov;


}