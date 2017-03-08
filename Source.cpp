#include "vector.h"
using namespace std;
void main()
{

	vector a;
	vector b;
	a.setx(4.0);
	a.sety(5.0);
	a.setz(6.0);
	b.setx(7.0);
	b.sety(8.0);
	b.setz(9.0);
	a.mostrar();
	b.mostrar();
	b=a.suma_de_vector(b);
	b.mostrar();

	system("pause");

}