#include <iostream>

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;

	std::cin >> k;
	std::cin >> m;
	std::cin >> n;

	if (n % k == 0)
	{
		std::cout << (n / k) * 2 * m;
	}
	else
	{
		std::cout << (n / k + 1) * 2 * m;
	}

	return EXIT_SUCCESS;
}