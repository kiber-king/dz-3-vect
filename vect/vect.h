#pragma once
#ifndef vect_H
#define vect_H
#include <iostream>

class vect {
	float x;
	float y;
public:
	vect(float x2, float y2) {
		x = x2;
		y = y2;
	}
	/*void set_v(float x, float y);*/
	float get_vx();
	float get_vy();
	float scumn(vect v1);
	float vumn(vect v1);
	~vect(){
		std::cout << "Destructor";
	}

};

#endif
