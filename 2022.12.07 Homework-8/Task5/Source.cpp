#include <iostream>

int f1(int n)
{
	if (n == 1)
	{
		return 1;
	}
	if (n <= 0)
	{
		return 0;
	}
	if (f1(n - 3) == 1 || f1(n - 5) == 1)
	{
		return 1;
	}
}

int f2(int n) // 2 способ без рекурсии и циклов
{
	if (n != 2 && n != 3 && n != 5 && n != 8 && n >= 1) 
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	if (f1(n) == 0)
	{
		std::cout << "NO";
	}
	else
	{
		std::cout << "YES ";
	}

	return EXIT_SUCCESS;
}