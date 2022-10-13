#include <iostream>

int main(int argc, char* argv[])
{
	int c = 0;
	int n = 0;

	do
	{
		std::cin >> n;
		if (n < 0)
		{
			if (n % 2 != 0)
			{
				c += 1;
			}
		}
	} while (n != 0);
	std::cout << c;

	return EXIT_SUCCESS;
}