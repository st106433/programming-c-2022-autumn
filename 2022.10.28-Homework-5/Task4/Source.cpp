#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0; // кол-во чисел 
	int v = -1000; // максимум
	int f = 0;

	std::cin >> n;

	int a[1000]{ 0 };

	for (int i = 1; i <= n; ++i) 
	{
		int q = 0;
		std::cin >> q;
		a[i] = q;
	}

	a[0] = a[n];
	a[n + 1] = a[1];

	for (int i = 1; i <= n; ++i)
	{
		f = a[i - 1] + a[i] + a[i + 1];
		if (f > v)
		{
			v = f;
		}
	}

	std::cout << v;

	return EXIT_SUCCESS;
}