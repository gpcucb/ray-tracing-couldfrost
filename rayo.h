#ifndef RAYO_H 
#define RAYO_H
#include "vector.h"
using namespace std;
class rayo
{
private:
	vector posicion;
	vector direccion;

public:
	rayo();
	rayo(vector,vector);
	~rayo(void);
	vector getpos();
	vector getdirec();
	void setpos(vector);
	void setdirec(vector);
};
#endif;
