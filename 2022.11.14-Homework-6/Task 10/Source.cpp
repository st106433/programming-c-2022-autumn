#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;

	int n = 0;
	std::cin >> n;

	int m = 0;
	std::cin >> m;

	int f[200000]{ 0 };

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cin >> a;
		f[a + 100000] = 1;
	}

	for (int i = 0; i <= m - 1; ++i)
	{
		std::cin >> a;
		if (f[a + 100000] == 1)
		{
			f[a + 100000] = 2;
		}
	}

	for (int i = 0; i <= 200000; ++i)
	{
		if (f[i] == 2)
		{
			std::cout << i - 100000 << " ";
		}
	}

	return EXIT_SUCCESS;
}