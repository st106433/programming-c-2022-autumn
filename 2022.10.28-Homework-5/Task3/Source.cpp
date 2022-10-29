#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0; // кол-во чисел 
	int g = 0; // начало промежутка
	int r = 0; // конец промежутка
	int c = 1000; // минимум
	int v = -1000; // максимум

	std::cin >> n;

	int a[1000]{ 0 };

	for (int i = 1; i <= n; ++i)
	{
		int q = 0;
		std::cin >> q;
		a[i] = q;
	}

	for (int i = 1; i <= n; ++i)
	{
		if (a[i] > v)
		{
			v = a[i];
		}
		if (a[i] < c)
		{
			c = a[i];
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		if (a[i] == v)
		{
			std::cout << c << " ";
		}
		else
		{
			std::cout << a[i] << " ";
		}
	}

	return EXIT_SUCCESS;
}