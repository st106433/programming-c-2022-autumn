#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 1;
	int j = 0;

	std::cin >> n;

	while (i <= n)
	{
		while (j < n)
		{
			if (i + j <= n)
			{
				std::cout << i + j << " ";
			}
			else
			{
				std::cout << 2 * n - (i + j) << " ";
			}
			j += 1;
		}
		j = 0;
		i += 1;
		std::cout << "" << std::endl;
	}
	return EXIT_SUCCESS;
}