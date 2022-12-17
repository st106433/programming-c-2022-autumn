#include <iostream>
#include <cstring>

char maxs(char* s, int n = 0, char c = 0)
{
	if (n == strlen(s))
	{
		return c;
	}

	if (s[n] >= c)
	{
		c = s[n];
	}

	return maxs(s, n + 1, c);
}

int main(int argc, char* argv[])
{
	char s[1000]{ 0 };

	std::cin >> s;

	std::cout << maxs(s);

	return EXIT_SUCCESS;
}