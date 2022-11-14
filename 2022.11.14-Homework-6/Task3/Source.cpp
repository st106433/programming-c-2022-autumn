#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int a[200]{ 0 };

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cin >> a[i];
	}

	int q = 0;
	std::cin >> q;

	int g = 0;
	int i = 0;

	while (a[i] >= q)
	{
		g = a[i];
		++i;
	}
	std::cout << i + 1;
	return EXIT_SUCCESS;
}