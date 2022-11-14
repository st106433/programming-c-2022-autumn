#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int a[1000]{ 0 };

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cin >> a[i];
	}

	int m = 0;
	std::cin >> m;

	for (int i = 0; i <= m - 1; ++i)
	{
		int c = 0;
		std::cin >> c;

		int b = 0;
		std::cin >> b;

		int j = 0;
		for (int j = c - 1; j <= b - 1; ++j)
		{
			std::cout << a[j] << " ";
		}
		std::cout << "\n";
	}

	return EXIT_SUCCESS;
}