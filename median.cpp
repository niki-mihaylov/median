#include "data/data.h"
#include "helper/helper.h"

int main()
{
	Data data;
	int choice;

	while (true)
	{
		choice = PrintMenu();
		if (choice != 1 && choice != 2)
		{
			break;
		}
		switch (choice)
		{
		case 1: SubMenuAdd(data);
			break;
		case 2: SubMenuPrint(data);
			break;
		default:
			break;
		}
	}
	return 0;
}
