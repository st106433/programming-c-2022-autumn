#pragma once
#include <string>

class Pupil
{
private:

	std::string name;
	std::string surname;

	int x;
	int y;
	int z;

public:

	Pupil(std::string name = " ", std::string surname = " ", int x = 0, int y = 0, int z = 0)
		: name(name), surname(surname), x(x), y(y), z(z) {};

	Pupil(const Pupil& other) : name(name), surname(surname), x(x), y(y), z(z) {};

	int Mean()
	{
		return x + y + z;
	}

	std::string Getname()
	{
		return name;
	}

	std::string Getsurname()
	{
		return surname;
	}

	~Pupil() {};
};
