#include <iostream>
int main(int argc, char* argv[])
{
	int n;

	std::cin >> n;

	std::cout << n / 100 + (n / 10) % 10 + n % 10 << std::endl;

	return EXIT_SUCCESS;
}