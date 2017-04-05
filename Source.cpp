#include "camara.h"
#include "esfera.h"
#include "rayo.h"
#include "triangulo.h"
using namespace std;
void main()
{
	vector dir;
	rayo r;
	float nx,ny,fov,df;  
	fov=39.31;
    df=0.035;
	//valor triangulo
	vector a(552.0,8,0.0);
    vector b(0.0,0.0,0.0);
    vector c(0.0,0.0,560.0);
	triangulo tri(a,b,c);
	// Valores de la cámara
	vector e(278,273,-800);
	vector ce(278,273,-700);
	vector u(0,1,0);
	camara ca(e,u,ce,fov,df);
	float t;
	bool res;
    nx = 640.0;
    ny = 480.0;

//Valores de la esfera
	vector pos(370,120,370);
	esfera es(pos,120);
	for(float i=0;i<nx;i++)
	{
		for(float j=0;j<ny;j++)
		{
			dir=ca.calcular_distan(i,j,nx,ny);
			dir.mostrar();
			r.setpos(e);
			r.setdirec(dir);
			es.interseccion(r,t,res);
		}
	}
	




	system("pause");

}