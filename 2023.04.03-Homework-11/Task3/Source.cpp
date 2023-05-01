#include <iostream>
#include "Class.h"

int main(int argc, char* argv[])
{
	double x = 0;
	double y = 0;
	double z = 0;

	std::cout << "Enter the lengths of sides of a triangle" << std::endl;
	std::cin >> x >> y >> z;
	std::cout << "Area: " << Triangle(x, y, z).Area() << std::endl;

	std::cout << "Enter the lengths of sides of a rectangle" << std::endl;
	std::cin >> x >> y;
	std::cout << "Area: " << Rectangle(x, y).Area() << std::endl;

	std::cout << "Enter length of the side of a square" << std::endl;
	std::cin >> x;
	std::cout << "Area: " << Square(x).Area() << std::endl;

	std::cout << "Enter length of the radius of a circle" << std::endl;
	std::cin >> x;
	std::cout << "Area: " << Circle(x).Area() << std::endl;

	

	return EXIT_SUCCESS;
}