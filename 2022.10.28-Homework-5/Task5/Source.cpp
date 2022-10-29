#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0; // кол-во чисел 
	int g = 0;
	int h = 0;
	int l = 1000;
	int t = 1000;

	std::cin >> n;

	int a[1000]{ 0 };

	for (int i = 1; i <= n; ++i)
	{
		int q = 0;
		std::cin >> q;
		a[i] = q;
	}

	std::cin >> g;

	for (int i = 1; i <= n; ++i)
	{
		if (a[i] - g < 0)
		{
			h = -(a[i] - g);
		}
		else
		{
			h = a[i] - g;
		}
		if (h < t)
		{
			t = h;
			l = a[i];
		}
		else if (h == t)
		{
			if (a[i] < l)
			{
				l = a[i];
			}
		}
	}

	std::cout << l;
	return EXIT_SUCCESS;
}