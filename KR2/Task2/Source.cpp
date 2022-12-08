#include <iostream>

void res(int n);

void res(int n)
{
	if (n <= 0)
	{
		std::cout << "incorrect";
	}
	if (n == 1)
	{
		int a = 0;
		std::cin >> a;

		std::cout << a << " ";
	}
	else
	{
		int a = 0;
		std::cin >> a;

		res(n - 1);
		std::cout << a << " ";
	}
}

int main(int argc, char* argv)
{
	int n = 0;

	std::cin >> n;

	res(n);

	return EXIT_SUCCESS;
}