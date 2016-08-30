#include <iostream>
#include <array>
int AttackPerHit(int attck, int hits) {
	return attck * hits;
}

void main() {
	int (*p)(int, int);
	 p = AttackPerHit;

	 int FunArry[5];
	 for (int i = 0; i < 5;i++) {
		FunArry[i] = (*p)((20 * 5 * i), i);
		std::cout << (FunArry[i]) << std::endl;
		
	 }
	 system("pause");
	return;
}