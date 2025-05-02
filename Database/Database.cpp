#define _CRTDB_MAP_ALLOC
#include <crtdbg.h>
#include <iostream>
#include "HeroDatabase.h"

using namespace std;

int main()
{
	HeroDatabase* database = new HeroDatabase;

	int choice;
	while (true)
	{
		cout << "1) Create Hero\n2) Display All\n3) Display Name\n4) Display Class\n5) Load\n6) Save\n7) Quit\n";
		cin >> choice;

		if (choice == 1)
		{
			int type;
			cout << "Enter Class (1=Archer 2=Barbarian): ";
			cin >> type;
			auto hero = database->Create(type);
			if (hero)
			{
				cin >> *hero;
				database->Add(move(hero));
			}
		}
        else if (choice == 2) {
            database->DisplayAll();
        }
        else if (choice == 5) {
            std::string filename;
            std::cout << "Enter filename: ";
            std::cin >> filename;
            database->Load(filename);
        }
        else if (choice == 6) {
            std::string filename;
            std::cout << "Enter filename: ";
            std::cin >> filename;
            database->Save(filename);
        }
        else if (choice == 7) {
            break;
        }
    }

    delete database;
    _CrtDumpMemoryLeaks();
    return 0;
}

