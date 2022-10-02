#include<iostream>

int main(int argc, char* argv[])
{
	int n;

	std::cin >> n;

	std::cout << "The next number for the number " << n << " is " << n + 1 << std::endl;
	std::cout << "The next previous for the number " << n << " is " << n - 1 << std::endl;

	return EXIT_SUCCESS;
}