#include <iostream>
#include <cstring>

void stars(char* s, int n = 0)
{
	if (n == 0)
	{
		std::cout << s[0];
		stars(s, n + 1);
	}
	else if (n == strlen(s))
	{
		std::cout << s[n];
	}
	else
	{
		std::cout << "*" << s[n];
		stars(s, n + 1);
	}
}

int main(int argc, char* argv[])
{
	char s[1000]{ 0 };

	std::cin >> s;

	stars(s);

	return EXIT_SUCCESS;
}