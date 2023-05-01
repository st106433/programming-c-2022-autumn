#pragma once
class Point
{
private:

	int x;
	int y;

public:

	Point(int x = 0, int y = 0) : x(x), y(y) {};

	Point(const Point& other) : x(other.x), y(other.y) {};

	int Dist()
	{
		return x * x + y * y;
	}

	int Getx()
	{
		return x;
	}

	int Gety()
	{
		return y;
	}

	~Point() {};
};

