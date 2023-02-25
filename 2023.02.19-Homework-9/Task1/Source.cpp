#include <iostream>
#include <string>

struct Animal {
	std::string type;
	std::string name;
	int age;

	Animal()
	{
			this->type = "Chair";
			this->name = "Schwarzkopf";
			this->age = 11;
	}

	Animal(std::string type, std::string name, int age)
	{
		this->type = type;
		this->name = name;
		this->age = age;
	}

	Animal(const Animal& kto)
	{
		this->name = kto.name;
		this->type = kto.type;
		this->age = kto.age;
	}

	~Animal()
	{

	}

};

void elderanimal(Animal& ll)
{
	ll.age++;
}

void printanimal(struct Animal ll)
{
	std::cout << "type: " << ll.type << " name: " << ll.name << " age: " << ll.age << std::endl;
}

int main(int argc, char* argv[])
{
	Animal kartofel;
	kartofel.name = "repka";
	kartofel.type = "kartofel";
	kartofel.age = 96;

	Animal mishka("kto", "chto", 1);

	Animal mishutka(mishka);

	printanimal(mishka);

	printanimal(kartofel);

	elderanimal(kartofel);
	
	printanimal(kartofel);

	return EXIT_SUCCESS;
}