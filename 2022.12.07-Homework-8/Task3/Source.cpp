#include <iostream>

int per(int n, int k)
{
	if (k > n || k <= -1 || n <= -1)
	{
		return -404;
	}
	if (k == n || k == 0)
	{
		return 1;
	}
	if (k == 1 || k == n - 1)
	{
		return n;
	}
	return per(n - 1, k - 1) + per(n - 1, k);
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int k = 0;
	std::cin >> k;

	std::cout << per(n, k);

	return EXIT_SUCCESS;
}
