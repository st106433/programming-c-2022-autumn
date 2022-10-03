#include <iostream>

int main(int argc, char* argv[])
{
	int a;
	int b;
	int c;

	std::cin >> a;
	std::cin >> b;

	c = a;
	a = b;
	b = c;

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	return EXIT_SUCCESS;
}