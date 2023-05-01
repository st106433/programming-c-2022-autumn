#include <iostream>
#include "Pupil.h"

Pupil* Switch(Pupil* arr, int i, int j, int n)
{
	Pupil* arr1 = new Pupil[n];

	for (int q = 0; q <= n - 1; ++q)
	{
		arr1[q] = arr[q];
	}

	arr1[i] = arr[j];
	arr1[j] = arr[i];

	delete[] arr;

	return arr1;
}

int main(int argc, char* argv[])
{
	int x = 0;
	int y = 0;
	int z = 0;
	std::string name = "";
	std::string surname = "";

	int n = 0;
	std::cin >> n;

	Pupil* array = new Pupil[n];

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cin >> name >> surname >> x >> y >> z;
		array[i] = Pupil(name, surname, x, y, z);
	}

	for (int j = 0; j <= n - 1; ++j)
	{
		for (int i = 0; i <= n - 2; ++i)
		{
			if (array[i].Mean() > array[i + 1].Mean())
			{
				array = Switch(array, i, i + 1, n);
			}
		}
	}

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cout << array[i].Getname() << " " << array[i].Getsurname() << std::endl;
	}

	return EXIT_SUCCESS;
}