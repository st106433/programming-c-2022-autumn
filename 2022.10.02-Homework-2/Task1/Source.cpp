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
		std::cout << "��� ";
	}
	if (a == 2)
	{
		std::cout << "������ ";
	}
	if (a == 3)
	{
		std::cout << "������ ";
	}
	if (a == 4)
	{
		std::cout << "��������� ";
	}
	if (a == 5)
	{
		std::cout << "������� ";
	}
	if (a == 6)
	{
		std::cout << "�������� ";
	}
	if (a == 7)
	{
		std::cout << "������� ";
	}
	if (a == 8)
	{
		std::cout << "��������� ";
	}
	if (a == 9)
	{
		std::cout << "��������� ";
	}
	if (b == 1)
	{
		f = 1;
		if (c == 1)
		{
			std::cout << "����������� ";
		}
		if (c == 2)
		{
			std::cout << "���������� ";
		}
		if (c == 3)
		{
			std::cout << "���������� ";
		}
		if (c == 4)
		{
			std::cout << "������������ ";
		}
		if (c == 5)
		{
			std::cout << "���������� ";
		}
		if (c == 6)
		{
			std::cout << "����������� ";
		}
		if (c == 7)
		{
			std::cout << "���������� ";
		}
		if (c == 8)
		{
			std::cout << "������������ ";
		}
		if (c == 9)
		{
			std::cout << "������������ ";
		}
		std::cout << "�������";
	}
	if (b == 2)
	{
		std::cout << "�������� ";
	}
	if (b == 3)
	{
		std::cout << "�������� ";
	}
	if (b == 4)
	{
		std::cout << "����� ";
	}
	if (b == 5)
	{
		std::cout << "��������� ";
	}
	if (b == 6)
	{
		std::cout << "���������� ";
	}
	if (b == 7)
	{
		std::cout << "��������� ";
	}
	if (b == 8)
	{
		std::cout << "����������� ";
	}
	if (b == 9)
	{
		std::cout << "��������� ";
	}
	if (f == 0)
	{
		if (c == 1)
		{
			std::cout << "���� ";
		}
		if (c == 2)
		{
			std::cout << "��� ";
		}
		if (c == 3)
		{
			std::cout << "��� ";
		}
		if (c == 4)
		{
			std::cout << "������ ";
		}
		if (c == 5)
		{
			std::cout << "���� ";
		}
		if (c == 6)
		{
			std::cout << "����� ";
		}
		if (c == 7)
		{
			std::cout << "���� ";
		}
		if (c == 8)
		{
			std::cout << "������ ";
		}
		if (c == 9)
		{
			std::cout << "������ ";
		}
		switch (c)
		{
		case 0:
			std::cout << "�������";
			break;
		case 1:
			std::cout << "�����";
			break;
		case 2:
		case 3:
		case 4:
			std::cout << "������";
			break;
		default:
			std::cout << "�������";
			break;
		}
	}
		return EXIT_SUCCESS;
}