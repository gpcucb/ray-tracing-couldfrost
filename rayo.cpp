#include "rayo.h"

rayo::rayo()
{
}
rayo::rayo(vector po,vector di)
{
	posicion=po;
	direccion=di;
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