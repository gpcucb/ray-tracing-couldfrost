#include "camara.h"
#include "esfera.h"
#include "rayo.h"
using namespace std;
void main()
{
	camara a;
	esfera es;
	vector dir,e,c,u,pos;
	rayo r;
	float nx,ny,fov,df;  
	fov=39.31;
    df=0.035;
	// Valores de la cámara
	e.setx(278);
	e.sety(273);
	e.setz(-800);
	c.setx(278);
	c.sety(273);
	c.setz(-700);
	u.setx(0);
	u.sety(1);
	u.setz(0);
	a.setcen(c);
	a.sete(e);
	a.setup(u);
	a.setdf(df);
	a.setfo(fov);
    nx = 640.0;
    ny = 480.0;

//Valores de la esfera
	pos.setx(370);
	pos.sety(120);
	pos.setz(370);
	es.setpos(pos);
	es.setra(120);
	for(float i=0;i<nx;i++)
	{
		for(float j=0;j<ny;j++)
		{
			dir=a.calcular_distan(i,j,nx,ny);
			dir.mostrar();
			r.setpos(e);
			r.setdirec(dir);
			es.interseccion(r);
		}
	}
	




	system("pause");

}