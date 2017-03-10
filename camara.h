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
	camara(void);
	~camara(void);
	vector geteye();
	vector vectorw();
	vector vectoru();
	vector vectorv();
	vector calcular_distan(float i,float j,float nx,float ny);
	void ingresarvalores();
	
};
#endif;
