#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	std::cout << n + 2 - (abs(n) % 2) << std::endl;

	return EXIT_SUCCESS;
}