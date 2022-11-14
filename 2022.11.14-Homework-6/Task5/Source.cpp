#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int q = 0;

	int f[100000]{ 0 };

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cin >> f[i];
		f[n + i] = f[i];
	}

	for (int i = 0; i <= n - 1; ++i)
	{
		if (f[i] == 1)
		{
			q = i;
		}
	}

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cout << f[i + q] << " ";
	}

	return EXIT_SUCCESS;
}