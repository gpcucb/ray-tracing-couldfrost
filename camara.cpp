#include "camara.h"

camara::camara()
{
}
camara::camara(vector ojo,vector u,vector cen,float fo,float d)
{
	e=ojo;
	float PI = 3.1415927;
	fov=((fo*PI)/180);
	u=up;
	center=cen;
	df=d;

}


camara::~camara(void)
{
}
vector camara::vectorw()
{
	vector r=e.resta_de_vectores(center);
	vector a((r.getx()/r.modulo2())*(-1),(r.gety()/r.modulo2())*(-1),(r.getz()/r.modulo2())*(-1));
	return a;
}
vector camara::vectoru()
{
	vector r=up.productovectorial(vectorw());
	vector a(r.getx()/r.modulo2(),r.gety()/r.modulo2(),r.getz()/r.modulo2());
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
void camara::sete(vector a)
{
	e=a;
}
void camara::setcen(vector a)
{
	center=a;
}
void camara::setup(vector a)
{
	up=a;
}
void camara::setfo(float a)
{
	fov=a;
}
void camara::setdf(float a)
{
	df=a;
}
