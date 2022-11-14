#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int p = -100;
	int m1 = 0; // индекс max
	int q = 100;
	int m2 = 0; // индекс min
	int sum = 0;
	int k = 1;

	int f[100]{ 0 };

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cin >> f[i];
	}

	for (int i = 0; i <= n - 1; ++i)
	{
		if (f[i] > 0)
		{
			sum += f[i];
		}
		if (p < f[i])
		{
			p = f[i];
			m1 = i;
		}
		if (q > f[i])
		{
			q = f[i];
			m2 = i;
		}
	}

	int a1 = 0;
	int a2 = 0;

	a1 = m1;
	a2 = m2;

	if (m2 < m1)
	{
		a1 = m2;
		a2 = m1;
	}

	for (int i = a1 + 1; i <= a2 - 1; ++i)
	{
		k *= f[i];
	}

	std::cout << sum << " " << k;

	return EXIT_SUCCESS;
}