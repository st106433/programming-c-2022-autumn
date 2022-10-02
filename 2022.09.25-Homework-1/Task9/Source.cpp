#include <iostream>
int main(int argc, char* argv[])
{
	int x;
	int q;

	std::cin >> x;

	q = x * x;

	std::cout << (q + x) * (q + 1) + 1 << std::endl;

	return EXIT_SUCCESS;
}