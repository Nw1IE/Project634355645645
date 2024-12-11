#include<iostream>
#include<string>
#include<Windows.h>
#include<limits>

#if defined(max)
#undef max
#endif

struct Student
{
	std::string name;
	std::string lastName;
	std::string serName;
	std::string fullName;

	int group = 0;
	int group1 = 0;
	std::string department;

	static const int size = 4;
	int rating[size]{};
	bool isStudent = true;

	void SetFullName()
	{
		std::cout << "---------------------------------";
		std::cout << "\n¬ведите им€: ";
		std::getline(std::cin, name, '\n');
		std::cout << "¬ведите фамилию: ";
		std::getline(std::cin, lastName, '\n');
		std::cout << "¬ведите отчество: ";
		std::getline(std::cin, serName, '\n');
		fullName = lastName + " " + name + " " + serName;
		system("cls");
	}

	std::string GetFullName()
	{
		return fullName;
	}

	void SetGroupInfo()
	{
		std::cout << "---------------------------------";
		std::cout << "\n¬ведите кафедру: ";
		std::getline(std::cin, department, '\n');
		std::cout << "¬ведите номер группы: ";
		std::cin >> group;
		system("cls");
	}

	void PrintGroupInfo()
	{
		std::cout << department << " " << group << "\n";
	}
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int size = 4;
	Student rpo_23_2[size];

	for (int i = 0; i < size; i++)
	{
		rpo_23_2[i].SetFullName();
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << rpo_23_2[i].GetFullName() << "\n";
	}

	for (int i = 0; i < size; i++)
	{
		rpo_23_2[i].SetGroupInfo();
		if (i != size - 1)
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

	}
	for (int i = 0; i < size; i++)
	{
		rpo_23_2[i].PrintGroupInfo();
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < rpo_23_2[0].size; j++)
		{
			std::cout << "---------------------------------";
			std::cout << "\n¬ведите оценку студента є " << i + 1 << ": ";
			std::cin >> rpo_23_2[i].rating[j];
			system("cls");
		}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < rpo_23_2[0].size; j++)
		{
			std::cout << rpo_23_2[i].rating[j] << " ";
		}
		std::cout << "ќценки \n";

	}




	return 0;
}