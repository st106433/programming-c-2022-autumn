#include <iostream>
int main(int argc, char* argv[])
{
	int n;

	std::cin >> n;

	std::cout << n + 2 - (abs(n) % 2) << std::endl;

	return EXIT_SUCCESS;
}