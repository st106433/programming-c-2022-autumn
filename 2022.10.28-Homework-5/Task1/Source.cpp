#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int g = 0;
	int q = 0;
	int c = 0;

	std::cin >> n;

	int a[1000]{ 0 };

	for (int i = 1; i <= n; ++i)
	{
		q = 0;
		std::cin >> q;
		a[i] = q;
	}

	std::cin >> g;

	for (int i = 1; i <= n; ++i)
	{
		if (a[i] == g)
		{
			c += 1;
		}
	}

	std::cout << c;

	return EXIT_SUCCESS;
}