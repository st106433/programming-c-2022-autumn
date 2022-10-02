#include <iostream>
int main(int argc, char* argv[])
{
	int h1;
	int m1;
	int s1;
	int h2;
	int m2;
	int s2;

	std::cin >> h1;
	std::cin >> m1;
	std::cin >> s1;
	std::cin >> h2;
	std::cin >> m2;
	std::cin >> s2;

	std::cout << (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1) << std::endl;

	return EXIT_SUCCESS;
}