#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int g = 0;
	int r = 0;
	int q = 0;
	int c = 0;
	int v = -1000;

	std::cin >> n;

	int a[1000]{ 0 };

	for (int i = 1; i <= n; ++i)
	{
		q = 0;
		std::cin >> q;
		a[i] = q;
	}

	std::cin >> g;
	std::cin >> r;

	for (int i = g; i <= r; ++i)
	{
		if (a[i] > v)
		{
			v = a[i];
			c = i;
		}
	}

	std::printf("%d % d", v, c);

	return EXIT_SUCCESS;
}