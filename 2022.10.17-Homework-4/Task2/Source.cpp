#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int c = 0;
	int q = 1;

	std::cin >> n;

	for (int i = 0; n != 0; ++i)
	{
		if (n % 10 != 0)
		{

			for (int j = 1; j <= i; ++j)
			{
				q *= 2;
			}

			c += q;
			q = 1;
		}

		n = n / 10;
	}

	std::cout << c;

	return EXIT_SUCCESS;
}