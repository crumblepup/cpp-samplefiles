#include <iostream>


//The const keyword specifies that a variable's value is constant.
//This tells the compiler it's not allowed to modify it, making the value pretty much read only.

int main()
{
	const double pi = 3.14159;
	pi = 2882; //The compiler should throw an error. See https://embed.fail/db37o05y.png
	const double radius = 10;
	double circumference = 2 * pi * radius;

	std::cout << circumference << "cm";

	return 0;
} 
