#ifndef ESFERA_H 
#define ESFERA_H
#include "vector.h"
#include "rayo.h"
#include <math.h>
using namespace std;
class esfera
{
private:
	vector posicion; 
	float radio;
public:
	esfera(void);
	~esfera(void);
	void interseccion(rayo);
	void setpos(vector);
	void setra(float);
};
#endif
