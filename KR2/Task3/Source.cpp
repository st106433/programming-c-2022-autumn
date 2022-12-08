#include <iostream>

int cubec(int n, int c = 8);
void cube8(int n);

int cubec(int n, int c)
{
	if (n <= -1)
	{
		std::cout << "incorrect";
		return 1;
	}
	else
	{
		for (int i = 1; i * i * i <= n && c != 0; ++i)
		{
			if (n - i * i * i == 0)
			{
				std::cout << i * i * i << " ";
				return -1;
			}
			else if (c >= 1)
			{
				if (cubec(n - i * i * i, c - 1) == -1)
				{
					std::cout << i * i * i << " ";
					return -1;
				}
			}
		}
	}
	return 0;
}

void cube8(int n)
{
	if (cubec(n, 8) == 0)
	{
		std::cout << "impossible";
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	{
		cube8(n);
	}
}