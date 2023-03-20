#include <iostream>
#include <string>
#include <ctime>

std::string antype[]{ "None", "Helicopter", "Zombie", "F", "Cyclops",
	"Cube", "Bear", "Chair", "Pencil", "Bee", "Frog" };

std::string anname[]{ "Albert", "Malbert", "Gleb", "Hleb", "Pepe",
	"Bebe", "Pupa", "Lupa", "Biba", "Boba" };

class Animal
{
	std::string name;
	std::string type;
	int power;
	int weight;

public:

	Animal(std::string name = "Pepe", std::string type = "None", int power = 1, int weight = 0.1)
		:name(name), type(type), power(power), weight(weight) {}

	Animal(const Animal& other)
		:name(other.name), type(other.type), power(other.power), weight(other.weight) {}

	void Setpower(int k) { power = k; }
	void Setweight(int k) { weight = k; }

	int Getpower() { return power; }
	std::string Getname() { return name; }
	std::string Gettype() { return type; }
	int Getweight() { return weight; }

	void Copy(const Animal& other)
	{
		this->name = other.name;
		this->type = other.type;
		this->power = other.power;
		this->weight = other.weight;
	}
	void Printan()
	{
		std::cout << "===============\nИмя:" << name << "\nТип:" << type << "\nСила:" << power << "\nВес:" << weight << "\n===============\n";
	}
	void Mighter() { power++; }
	void Weighter(int k) { weight += k; }

	~Animal() {}

};

int Fight(Animal& an1, Animal& an2)
{
	if (1.59 * an1.Getweight() + 19.31 * an1.Getpower() >= 1.59 * an2.Getweight() + 19.31 * an2.Getpower())
	{
		an1.Mighter();
		an1.Weighter(an2.Getweight());
		return 1;
	}
	else
	{
		an2.Mighter();
		an2.Weighter(an1.Getweight());
		return 2;
	}
}

Animal Randan()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	a = rand() % 10;
	b = rand() % 11;
	c = rand() % 1000;
	d = rand() & 240;

	Animal an(anname[a], antype[b], c, d);

	return an;
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));


	Animal* arr = new Animal[100];

	for (int i = 0; i < 100; i++)
	{
		arr[i] = Randan();
	}

	std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\nНажмите 1, чтобы посмотреть на бойцов в 1 раунде\n";
	std::cout << "Нажмите 0, чтобы пропустить \n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;

	int k = 0;
	std::cin >> k;

	if (k == 1)
	{
		for (int i = 0; i < 99; i += 2)
		{
			std::cout << "o-o-o-o-o-o-o-o-o-o-o-o-o-o-o" << std::endl;
			std::cout << "ПАРА" << i / 2 + 1 << std::endl;
			arr[i].Printan();
			std::cout << "VS" << std::endl;
			arr[i + 1].Printan();
		}
	}

	Animal* arr1 = new Animal[50];

	for (int i = 0; i < 50; i++)
	{
		if (Fight(arr[2 * i], arr[2 * i + 1]) == 1)
		{
			arr1[i].Copy(arr[2 * i]);
		}
		else
		{
			arr1[i].Copy(arr[2 * i + 1]);
		}
	}

	delete[] arr;

	std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\nНажмите 1, чтобы посмотреть на бойцов во 2 раунде\n";
	std::cout << "Нажмите 0, чтобы пропустить \n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;

	std::cin >> k;

	if (k == 1)
	{
		for (int i = 0; i < 49; i++)
		{
			std::cout << "o-o-o-o-o-o-o-o-o-o-o-o-o-o-o" << std::endl;
			std::cout << "ПАРА" << i / 2 + 1 << std::endl;
			arr1[i].Printan();
			std::cout << "VS" << std::endl;
			arr1[i + 1].Printan();
		}
	}

	Animal* arr2 = new Animal[25];

	for (int i = 0; i < 25; i++)
	{
		if (Fight(arr1[2 * i], arr1[2 * i + 1]) == 1)
		{
			arr1[i].Copy(arr1[2 * i]);
		}
		else
		{
			arr2[i].Copy(arr1[2 * i + 1]);
		}
	}

	delete[] arr1;

	std::cout << "Прискорбно видеть, что " << arr2[24].Getname() << " the " << arr2[24].Gettype()
		<< " умер от приступа, не выдержав волнения после одержанной победы" << std::endl;

	std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\nНажмите 1, чтобы посмотреть на бойцов в 3 раунде\n";
	std::cout << "Нажмите 0, чтобы пропустить \n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;

	std::cin >> k;

	if (k == 1)
	{
		for (int i = 0; i < 24; i += 2)
		{
			std::cout << "o-o-o-o-o-o-o-o-o-o-o-o-o-o-o" << std::endl;
			std::cout << "ПАРА" << i / 2 + 1 << std::endl;
			arr2[i].Printan();
			std::cout << "VS" << std::endl;
			arr2[i + 1].Printan();
		}
	}

	Animal* arr3 = new Animal[12];

	for (int i = 0; i < 12; i++)
	{
		if (Fight(arr2[2 * i], arr2[2 * i + 1]) == 1)
		{
			arr3[i].Copy(arr2[2 * i]);
		}
		else
		{
			arr3[i].Copy(arr2[2 * i + 1]);
		}
	}

	delete[] arr2;

	std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\nНажмите 1, чтобы посмотреть на бойцов в 4 раунде\n";
	std::cout << "Нажмите 0, чтобы пропустить \n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;

	std::cin >> k;

	if (k == 1)
	{
		for (int i = 0; i < 11; i += 2)
		{
			std::cout << "o-o-o-o-o-o-o-o-o-o-o-o-o-o-o" << std::endl;
			std::cout << "ПАРА" << i / 2 + 1 << std::endl;
			arr3[i].Printan();
			std::cout << "VS" << std::endl;
			arr3[i + 1].Printan();
		}
	}

	Animal* arr4 = new Animal[6];

	for (int i = 0; i < 6; i++)
	{
		if (Fight(arr3[2 * i], arr3[2 * i + 1]) == 1)
		{
			arr4[i].Copy(arr3[2 * i]);
		}
		else
		{
			arr4[i].Copy(arr3[2 * i + 1]);
		}
	}

	delete[] arr3;

	std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\nНажмите 1, чтобы посмотреть на бойцов в 5 раунде\n";
	std::cout << "Нажмите 0, чтобы пропустить \n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;

	std::cin >> k;

	if (k == 1)
	{
		for (int i = 0; i < 5; i += 2)
		{
			std::cout << "o-o-o-o-o-o-o-o-o-o-o-o-o-o-o" << std::endl;
			std::cout << "ПАРА" << i / 2 + 1 << std::endl;
			arr4[i].Printan();
			std::cout << "VS" << std::endl;
			arr4[i + 1].Printan();
		}
	}

	Animal* arr5 = new Animal[3];

	for (int i = 0; i < 3; i++)
	{
		if (Fight(arr4[2 * i], arr4[2 * i + 1]) == 1)
		{
			arr5[i].Copy(arr4[2 * i]);
		}
		else
		{
			arr5[i].Copy(arr4[2 * i + 1]);
		}
	}

	delete[] arr4;

	std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\nНажмите 1, чтобы посмотреть на бойцов в 6 раунде\n";
	std::cout << "Нажмите 0, чтобы пропустить \n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;

	std::cin >> k;

	if (k == 1)
	{
		for (int i = 0; i < 3; i++)
		{
			std::cout << "o-o-o-o-o-o-o-o-o-o-o-o-o-o-o" << std::endl;
			std::cout << "Боец " << i + 1 << std::endl;
			arr5[i].Printan();
		}
	}



	double f1 = 0;
	double f2 = 0;
	double f3 = 0;

	f1 = 1.59 * arr5[0].Getweight() + 19.31 * arr5[0].Getpower();
	f2 = 1.59 * arr5[1].Getweight() + 19.31 * arr5[1].Getpower();
	f3 = 1.59 * arr5[2].Getweight() + 19.31 * arr5[2].Getpower();

	double c = f1;
	int q = 0;

	std::cout << "Нажмите любую клавишу, чтобы узнать победителя" << std::endl;

	std::string l;

	std::cin >> l;

	if (f2 >= f1)
	{
		c = f2;
		q = 1;
	}

	if (f3 >= c)
	{
		c = f2;
		q = 2;
	}

	std::cout << "WINNER" << std::endl;

	arr5[q].Printan();

	delete[] arr5;

	return EXIT_SUCCESS;
}