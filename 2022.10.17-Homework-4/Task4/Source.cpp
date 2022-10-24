#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int q = 0;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;

	for (int i = 0; i <= 1000; ++i)
	{
		if (i != e)
		{
			if (a * i * i * i + b * i * i + c * i + d == 0)
			{
				q += 1;
			}
		}
	}
	std::cout << q;
	EXIT_SUCCESS;
}