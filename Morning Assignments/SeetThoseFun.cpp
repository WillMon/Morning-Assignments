#include <iostream>
#include<random>
#include <assert.h>
#include <time.h>
/*write a function that takes a function as a parameter. 
The function it receives should take two arguments (min,max). 
Calculate a random number between those two numbers and return it.
If the function fails return or assert on the call. 
if the function that takes the min,max function fails give feedback to the user.*/

int Function(int min, int max ) {
	int random = 0;
	random = rand() % max + min;
	return random;
}
void Catcher(int Open) {
	assert(Open != NULL);
	std::cout << Open << std::endl;

}
void main() {
	int min, max;
	int  (*Fun)(int, int);
	Fun = Function;
	std::cin >> min;
	std::cin >> max;

	
	Catcher((Fun)(min, max));

	system("pause");
} 