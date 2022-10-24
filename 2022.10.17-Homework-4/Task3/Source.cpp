#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int c = 0;

	std::cin >> n;

	for (int i = 1; c != n; ++i)
	{
		if (c == n)
		{
			break;
		}
		for (int j = 1; j <= i; ++j, ++ c)
		{
			if (c == n)
			{
				break;
			}
			std::cout << i << " ";
		}
	}
	
	EXIT_SUCCESS;
}