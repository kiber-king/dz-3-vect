#include "vect.h"
#include <iostream>

int main()
{
	float x1 = 3;
	float x2 = 2;
	float y1 = 5;
	float y2 = 7;
	vect v1(x1, y1);
	vect v2(x2, y2);
	/*v1.set_v(x1, y1); v2.set_v(x2, y2);*/
	std::cout <<"vect 1: "<<v1.get_vx()<<" "<< v1.get_vy()<<"\n"
		<< "vect 2: " << v2.get_vx() << " " << v2.get_vy() << "\n"
		<<"scal Um: " << v1.scumn(v2) << "\n"
		<< "vect Um: " << "0 "<<"0 "<< v1.vumn(v2) << "\n";


}
