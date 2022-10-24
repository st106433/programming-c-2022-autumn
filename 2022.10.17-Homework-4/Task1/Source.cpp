#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int c = 0;

	std::cin >> n;
	

	for (int i = 1; i <= n; ++i)
	{
		if (n % i == 0)
		{
			c += 1;
		}
	}
	std::cout << c;

	return EXIT_SUCCESS;
}