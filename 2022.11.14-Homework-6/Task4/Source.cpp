#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int f[1000]{ 0 };

	for (int i = 0; i <= n - 1; ++i)
	{
		f[i] = i + 1;
	}

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cout << f[i] << " ";
	}
	std::cout << "\n";

	int a = 0;
	std::cin >> a;

	int b = 0;
	std::cin >> b;

	for (int i = a - 1; i <= a - 1 + (b - a) / 2; ++i)
	{	
		int c = 0;
		c = f[i];
		f[i] = f[b - 1 - (i - a + 1)];
		f[b - 1 - (i - a + 1)] = c;
	}

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cout << f[i] << " ";
	}
	std::cout << "\n";

	int c = 0;
	std::cin >> c;

	int d = 0;
	std::cin >> d;

	for (int i = c - 1; i <= c - 1 + (d - c) / 2; ++i)
	{
		int q = 0;
		q = f[i];
		f[i] = f[d - 1 - (i - c + 1)];
		f[d - 1 - (i - c + 1)] = q;
	}

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cout << f[i] << " ";
	}

	return EXIT_SUCCESS;
}