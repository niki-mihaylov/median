#include "helper.h"

int PrintMenu()
{
	int choice;
	std::cout <<std::endl << "(1) Add number" << std::endl
			      << "(2) Print median" << std::endl
			      << "Press any key to quit" << std::endl
			      << "Enter your choice: ";
	std::cin >> choice;
	return choice;
}

void SubMenuAdd(Data& data)
{
	double num;
	std::cout << "Enter your number: ";
	std::cin >> num;
	data.AddNumber(num);
}

void SubMenuPrint(Data& data)
{
	std::cout << "The median is: " << data.PrintMedian() << std::endl;
}
