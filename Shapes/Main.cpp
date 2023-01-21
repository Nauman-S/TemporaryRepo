#include<iostream>
#include <cstdlib>

#include "Rectangle.h"
#include "Circle.h"

int factorial(int);

int main()
{
	Rectangle rectangle(10, 20);
	Circle circle(10);

	
	rectangle.area();
	rectangle.display();

	circle.area();
	circle.display();

	int n = 10;
	std::cout << n << " factorial is " << factorial(n) << std::endl;

	return EXIT_SUCCESS;
}

int factorial(int n) {
	if (n < 0) {
		return 0;
	}
	else if (n == 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}