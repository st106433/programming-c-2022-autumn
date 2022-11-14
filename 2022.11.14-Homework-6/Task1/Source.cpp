#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int a[1000]{ 0 };
	
	for (int i = 0; i <= n - 1; ++i)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cout << a[n - 1 - i] << " ";
	}
	return EXIT_SUCCESS;
}