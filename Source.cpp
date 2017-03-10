#include "camara.h"
using namespace std;
void main()
{
	camara a;
	vector dir;
	float nx,ny;
	a.ingresarvalores();
	cout<<"ingresar nx"<<endl;
	cin>>nx;
	cout<<"ingresar ny"<<endl;
	cin>>ny;
	for(float i=0;i<nx;i++)
	{
		for(float j=0;j<ny;j++)
		{
			dir=a.calcular_distan(i,j,nx,ny);
			dir.mostrar();
		}
	}
	




	system("pause");

}