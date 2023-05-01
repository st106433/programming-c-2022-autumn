#pragma once
#include <string>

class Shape
{
public:

	double x;
	double y;
	double z;

	Shape(double x = 0, double y = 0, double z = 0)
		: x(x), y(y), z(z) {};

	Shape(const Shape& other)
		: x(other.x), y(other.y), z(other.z) {};

	double Getx()
	{
		return x;
	}

	double Gety()
	{
		return y;
	}

	double Getz()
	{
		return z;
	}

	~Shape() {};
};

class Triangle : public Shape
{
public:

	std::string name;

	Triangle(int x = 0, int y = 0, int z = 0, std::string name = "треугольник") : Shape(x, y, z), name(name) {};

	std::string Getname()
	{
		return name;
	}

	double Area()
	{
		double p = 0.5 * (x + y + z);

		if (x <= y + z && y <= x + z && z <= x + y)
		{
			return sqrt(p * (p - x) * (p - y) * (p - z));
		}
		else
		{
			return -1;
		}
	}

	~Triangle() {};

};

class Rectangle : public Shape
{
public:
	
	Rectangle(double x = 0, double y = 0) : Shape(x, y, 0) {};

	double Area()
	{
		return x * y;
	}

	~Rectangle() {};
};

class Square : public Rectangle
{
public:
	Square(double x = 0) : Rectangle(x, x) {};

	~Square() {};
};

class Circle : public Shape
{
public:

	Circle(double x = 0) : Shape(x, 0, 0) {};

	double Area()
	{
		return 3.1415 * x * x;
	}

	~Circle() {};
};



