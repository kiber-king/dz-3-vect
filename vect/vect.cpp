#include "vect.h"

//void vect::set_v(float x1, float y1) {
//	x = x1;
//	y = y1;
//}

float vect::get_vx() {
	return x;
}
float vect::get_vy() {
	return y;
}
float vect::scumn(vect v1){
	return v1.get_vx() * x + v1.get_vy()*y;
}
 float vect::vumn(vect v1) {
	 return x * v1.get_vy() - y * v1.get_vx();
}