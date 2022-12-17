#include <iostream>

int min(int a, int b, int c, int d)
{
	int q = b;
	int p = d;
	if (a <= b)
	{
		q = a;
	}
	if (c <= d)
	{
		p = c;
	}
	if (q <= p)
	{
		return q;
	}
	else
	{
		return p;
	}
}

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;

	std::cout << min(a, b, c, d);

	return EXIT_SUCCESS;
}