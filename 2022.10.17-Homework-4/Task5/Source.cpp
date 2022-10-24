#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	float c = 0;

	for (int i = 0; i <= n; ++i)
	{
		int q = 1;
		for (int j = 1; j <= i; ++j)
		{
			q *= j;
		}
		c += 1.0 / q;
	}

	std::cout << c;

	return EXIT_SUCCESS;
}