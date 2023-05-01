#include <iostream>
#include "Point.h"

Point* Switch(Point* arr, int i, int j, int n)
{
	Point* arr1 = new Point[n];

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

	int n = 0;
	std::cin >> n;

	Point* array = new Point[n];

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cin >> x >> y;

		array[i] = Point(x, y);
	}

	for (int j = 0; j <= n - 1; ++j)
	{
		for (int i = 0; i <= n - 2; ++i)
		{
			if (array[i].Dist() > array[i + 1].Dist())
			{
				array = Switch(array, i, i + 1, n);
			}
		}
	}

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cout << array[i].Getx() << " " << array[i].Gety() << std::endl;
	}

	return EXIT_SUCCESS;
}