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
	for(int i=0;i<nx;i++)
	{
		for(int j=0;j<ny;j++)
		{
			dir=a.calcular_distan(i,j,nx,ny);
			dir.mostrar();
		}
	}
	




	system("pause");

}