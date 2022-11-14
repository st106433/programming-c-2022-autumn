#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int u = 0;
	int y = 0;

	int f[100]{ 0 };
	int a[100]{ 0 };
	int b[100]{ 0 };

	for (int i = 0; i <= n - 1; ++i)
	{
		int q = 0;
		std::cin >> q;

		if (q % 2 == 1)
		{
			a[i] = q;
		}
		else
		{
			b[i] = q;
		}
	}

	for (int i = 0; i <= n - 1; ++i)
	{
		int q = 0;
		if (a[i] != 0)
		{
			std::cout << a[i] << " ";
			u += 1;
		}
	}
	std::cout << "\n";

	for (int i = 0; i <= n - 1; ++i)
	{
		int q = 0;
		if (b[i] != 0)
		{
			std::cout << b[i] << " ";
			y += 1;
		}
	}
	std::cout << "\n";

	if (y >= u)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}