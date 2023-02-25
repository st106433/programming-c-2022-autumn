#include <iostream>
#include <string>

struct Animal
{
	std::string type;
	std::string name;
	int age;
	Animal()
	{
		this->type = "4 legs";
		this->name = "chair";
		this->age = 4;
	}

	Animal(std::string type, std::string name, int age)
	{
		this->type = type;
		this->name = name;
		this->age = age;
	}

	Animal(const Animal& an)
	{
		this->type = an.type;
		this->name = an.name;
		this->age = an.age;
	}

	~Animal()
	{

	}

};

void printAnimal(Animal an)
{
	std::cout << an.type << " ";
	std::cout << an.name << " ";
	std::cout << an.age << " ";
}

void elderAnimal(Animal& an)
{
	an.age += 1;
}

int main(int argc, char* argv[])
{
	Animal stul;

	Animal armclock("4", "5", 6);

	elderAnimal(stul);
	elderAnimal(armclock);

	printAnimal(stul);
	printAnimal(armclock);
}