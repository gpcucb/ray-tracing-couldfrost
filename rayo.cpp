#include "rayo.h"


rayo::rayo(void)
{
}


rayo::~rayo(void)
{
}
vector rayo::getdirec()
{
	return direccion;
}
vector rayo::getpos()
{
	return posicion;
}
void rayo::setdirec(vector a)
{
	direccion=a;
}
void rayo::setpos(vector a)
{
	posicion=a;
}