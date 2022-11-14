#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int f[20000]{ 0 };

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cin >> f[i];
		f[i + n] = f[i];
	}

	int m = 0;
	std::cin >> m;

	m = (m % n + n) % n;

	std::cout << m << " ";

	for (int i = n - m; i <= 2 * n - m - 1; ++i)
	{
		std::cout << f[i];
	}

	return EXIT_SUCCESS;
}