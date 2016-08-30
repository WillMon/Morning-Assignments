#ifndef MATRIX
#define MATRIX 
#include <iostream>

struct vec4 {
	 int num1, num2, nnum3, num4;
};

class Orthis {
public:
	Orthis( int);
	void add(vec4);
	
private:
	int size;
	int count;
	vec4 matrix[];
	
};

Orthis::Orthis(int s) {
	size = s;
	matrix[size];
}
void Orthis::add(vec4 vec) {
	matrix[count];
	count++;
}



#endif
