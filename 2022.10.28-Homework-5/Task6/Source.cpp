#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int c = -1000;
	int p = 0;

	std::cin >> n;

	int a[1000]{ 0 };
	int b[1000]{ 0 };
	float t = 0;
	float q = 0;

	for (int i = 1; i <= n; ++i)
	{
		int q = 0;
		std::cin >> q;
		a[i] = q;
	}
	for (int i = 1; i <= n; ++i)
	{
		int q = 0;
		std::cin >> q;
		b[i] = q;
	}

	for (int i = 1; i <= n; ++i)
	{
		t = b[i] * a[i] / 100.0;
		if (q < t)
		{
			q = t;
			p = i;
		}
	}

	std::cout << p;

	return EXIT_SUCCESS;
}