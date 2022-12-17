#include <iostream>

int phi(int n)
{
	if (n < 0)
	{
		return -404;
	}
	if (n == 0 || n == 1)
	{
		return 1;
	}
	if (n >= 2)
	{
		return phi(n - 1) + phi(n - 2);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	std::cout << phi(n);
	
	return EXIT_SUCCESS;
}