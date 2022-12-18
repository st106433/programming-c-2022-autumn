#include <iostream>
#include <cstring>

void scobk(char* s, int i = 0)
{
	if (strlen(s) == 1 || strlen(s) == 2)
	{
		std::cout << "(" << s << ")";
	}
	else if (i == strlen(s) - 1)
	{
		std::cout << s[i] << ")";
	}
	else
		if (i >= strlen(s) / 2)
		{
			std::cout << s[i] << ")";
			scobk(s, i + 1);
		}
		else if (i <= strlen(s) / 2 - 2)
		{
			if (i == 0)
			{
				std::cout << "(";
			}
			std::cout << s[i] << "(";
			scobk(s, i + 1);
		}
		else if (i = strlen(s) / 2 - 1)
		{
			if (strlen(s) % 2 == 1)
			{
				std::cout << s[i] << "(";
				scobk(s, i + 1);
			}
			else
			{
				std::cout << s[i];
				scobk(s, i + 1);
			}
		}
}


int main(int argc, char* argv[])
{
	char s[1000]{ 0 };

	std::cin >> s;

	scobk(s);

	return EXIT_SUCCESS;
}