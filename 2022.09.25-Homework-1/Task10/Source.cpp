#include <iostream>
int main(int argc, char* argv[])
{
	int a;
	int b;
	int c;

	std::cin >> a;
	std::cin >> b;

	c = ((a / b) * b + (b / a) * a);

	std::cout << c + (a / c) * (a % c) + (b / c) * (b % c) << std::endl;

	return EXIT_SUCCESS;
}