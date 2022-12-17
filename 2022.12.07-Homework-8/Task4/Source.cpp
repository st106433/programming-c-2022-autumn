#include <iostream>

void hanoi(int n, int a = 1, int b = 2)
{
	if (n == 2)
	{
		std::cout << "from " << a << " move " << 1 << " to " << 6 - b - a << std::endl;
		std::cout << "from " << a << " move " << 2 << " to " << b << std::endl;
		std::cout << "from " << 6 - b - a << " move " << 1 << " to " << b << std::endl;
	}
	else
	{
		hanoi(n - 1, a, 6 - b - a);
		std::cout << "from " << a << " move " << n << " to " << b << std::endl;
		hanoi(n - 1, 6 - a - b, b);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	hanoi(n);

	return EXIT_SUCCESS;
}