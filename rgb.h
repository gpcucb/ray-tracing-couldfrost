#ifndef RGB_H
#define RGB_H
#include <string>
#include <Windows.h>
#include <sstream>
using namespace std;
class rgb
{
private:
	float red;
	float green;
	float blue;

public:
	rgb();
	rgb(float,float,float);
	~rgb(void);
	float getr();
	float getg();
	float getb();
	void setr(float);
	void setg(float);
	void setb(float);
};
#endif;

