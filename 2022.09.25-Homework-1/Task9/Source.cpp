#include <iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int q = 0;

	std::cin >> x;

	q = x * x;

	std::cout << (q + x) * (q + 1) + 1 << std::endl;

	return EXIT_SUCCESS;
}