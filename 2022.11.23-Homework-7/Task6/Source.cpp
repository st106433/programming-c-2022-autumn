#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int q = 0;

	std::cin >> n;
	std::cin >> m;

	int** a = new int* [n];

	for (int i = 0; i <= n - 1; ++i)
	{
		a[i] = new int[m];
	}

	for (int i = 0; i <= n - 1; ++i)
	{
		for (int j = 0; j <= m - 1; ++j)
		{
			std::cin >> a[i][j];
		}
	}

	for (int i = 0; i <= n - 1; ++i)
	{
		for (int j = 0; j <= m - 1; ++j)
		{
			std::cin >> q;
			a[i][j] += q;
		}
	}

	for (int i = 0; i <= n - 1; ++i)
	{
		for (int j = 0; j <= m - 1; ++j)
		{
			printf("%d ", a[i][j]);
		}
		std::cout << std::endl;
	}

	for (int i = 0; i <= n - 1; ++i)
	{
		delete[] a[i];
	}

	delete[] a;

	return EXIT_SUCCESS;
}
	
