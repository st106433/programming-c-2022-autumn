#include <iostream>
#include <locale.h>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int f = 0;

	std::cin >> n;

	a = n / 100;
	b = (n / 10) % 10;
	c = n % 10;

	if (a == 1)
	{
		std::cout << "сто ";
	}
	if (a == 2)
	{
		std::cout << "двести ";
	}
	if (a == 3)
	{
		std::cout << "триста ";
	}
	if (a == 4)
	{
		std::cout << "четыреста ";
	}
	if (a == 5)
	{
		std::cout << "пятьсот ";
	}
	if (a == 6)
	{
		std::cout << "шестьсот ";
	}
	if (a == 7)
	{
		std::cout << "семьсот ";
	}
	if (a == 8)
	{
		std::cout << "восемьсот ";
	}
	if (a == 9)
	{
		std::cout << "девятьсот ";
	}
	if (b == 1)
	{
		f = 1;
		if (c == 1)
		{
			std::cout << "одиннадцать ";
		}
		if (c == 2)
		{
			std::cout << "двенадцать ";
		}
		if (c == 3)
		{
			std::cout << "тринадцать ";
		}
		if (c == 4)
		{
			std::cout << "четырнадцать ";
		}
		if (c == 5)
		{
			std::cout << "пятнадцать ";
		}
		if (c == 6)
		{
			std::cout << "шестнадцать ";
		}
		if (c == 7)
		{
			std::cout << "семнадцать ";
		}
		if (c == 8)
		{
			std::cout << "восемнадцать ";
		}
		if (c == 9)
		{
			std::cout << "девятнадцать ";
		}
		std::cout << "бананов";
	}
	if (b == 2)
	{
		std::cout << "двадцать ";
	}
	if (b == 3)
	{
		std::cout << "тридцать ";
	}
	if (b == 4)
	{
		std::cout << "сорок ";
	}
	if (b == 5)
	{
		std::cout << "пятьдесят ";
	}
	if (b == 6)
	{
		std::cout << "шестьдесят ";
	}
	if (b == 7)
	{
		std::cout << "семьдесят ";
	}
	if (b == 8)
	{
		std::cout << "восемьдесят ";
	}
	if (b == 9)
	{
		std::cout << "девяносто ";
	}
	if (f == 0)
	{
		if (c == 1)
		{
			std::cout << "один ";
		}
		if (c == 2)
		{
			std::cout << "два ";
		}
		if (c == 3)
		{
			std::cout << "три ";
		}
		if (c == 4)
		{
			std::cout << "четыре ";
		}
		if (c == 5)
		{
			std::cout << "пять ";
		}
		if (c == 6)
		{
			std::cout << "шесть ";
		}
		if (c == 7)
		{
			std::cout << "семь ";
		}
		if (c == 8)
		{
			std::cout << "восемь ";
		}
		if (c == 9)
		{
			std::cout << "девять ";
		}
		switch (c)
		{
		case 0:
			std::cout << "бананов";
			break;
		case 1:
			std::cout << "банан";
			break;
		case 2:
		case 3:
		case 4:
			std::cout << "банана";
			break;
		default:
			std::cout << "бананов";
			break;
		}
	}
		return EXIT_SUCCESS;
}