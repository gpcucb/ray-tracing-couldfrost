#ifndef RGB_H
#define RGB_H
#include "vector.h"
#include "rayo.h"
using namespace std;
class triangulo
{
private:
	vector a;
	vector b;
	vector c;
public:
	triangulo(void);
	triangulo(vector,vector,vector);
	~triangulo(void);
	void interseccion(rayo r,bool&,float&);
	vector geta();
	vector getb();
	vector getc();
	void seta(vector);
	void setb(vector);
	void setc(vector);

};
#endif;
