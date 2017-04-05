#ifndef VECTOR_H
#define VECTOR_H
#include <string>
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <sstream>
#include <stdio.h>
#include <iostream>
using namespace std;
class vector
{
private:
	float x;
	float y;
	float z;
public:
	vector();
	vector(float,float,float);
	~vector(void);
	vector suma_de_vector(vector);
	vector resta_de_vectores(vector);
	float getx();
	float gety();
	float getz();
	void setx(float);
	void sety(float);
	void setz(float);
	void mostrar();
	vector productovectorial(vector);
	float productoscalar(vector);
	float modulo2();
	vector per_escalar(float);
	void ingresar();
};
#endif
