#ifndef CAMARA_H 
#define CAMARA_H
#include "vector.h"
using namespace std;
class camara
{
	vector e;
	vector center;
	vector up;
	float fov; 
	float df;
public:
	camara();
	camara(vector,vector,vector,float,float);
	~camara(void);
	vector geteye();
	void sete(vector);
	void setcen(vector);
	void setup(vector);
	void setfo(float);
	void setdf(float);
	vector vectorw();
	vector vectoru();
	vector vectorv();
	vector calcular_distan(float i,float j,float nx,float ny);
	void ingresarvalores();
	

};
#endif;
