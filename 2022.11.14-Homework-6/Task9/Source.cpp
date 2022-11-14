#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int sum = 0;
	int l = -1;
	
	int f[100]{ 0 };

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cin >> f[i];
	}

	for (int i = 0; i <= n - 1; ++i)
	{
		int j = 0;
		int q = 0;
		int g = 0;
		g = i;
		q = -100;

		for (int j = i; j <= n - 1; ++j)
		{
			if (f[j] > q)
			{
				q = f[j];
				g = j;
			}
		}

		if (i == g)
		{
			sum += (i - l) * q;
			l = i;
		}
	}

	std::cout << sum;

	return EXIT_SUCCESS;
}