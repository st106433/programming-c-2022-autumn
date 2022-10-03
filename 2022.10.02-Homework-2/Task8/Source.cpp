#include <iostream>
#include <locale.h>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int a = 0;
	int b = 0;
	int c = 0;
	
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	if (a + b > c && b + c > a && a + c > b)
	{
		if (a * a + b * b == c * c)
		{
			std::cout << "right";
		}
		else if (b * b + c * c == a * a)
		{
			std::cout << "right";
		}
		else if (a * a + c * c == b * b)
		{
			std::cout << "right";
		}
		else if (a * a + b * b < c * c)
		{
			std::cout << "obtuse";
		}
		else if (b * b + c * c < a * a)
		{
			std::cout << "obtuse";
		}
		else if (a * a + c * c < b * b)
		{
			std::cout << "obtuse";
		}
		else
		{
			std::cout << "acute";
		}
	}
	else
	{
		std::cout << "impossible";
	}

	return EXIT_SUCCESS;
}