#include "rgb.h"

rgb::rgb()
{
}
rgb::rgb(float r,float g,float b)
{
	red=r;
	green=g;
	blue=b;
}


rgb::~rgb(void)
{
}
float rgb::getr()
{
	return red;
}
float rgb::getg()
{
	return green;
}
float rgb::getb()
{
	return blue;
}
void rgb::setr(float r)
{
	red=r;
}
void rgb::setg(float g)
{
	green=g;
}
void rgb::setb(float b)
{
	blue=b;
}