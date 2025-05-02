#pragma once
#include "HeroRegistry.h"

using namespace std;

class Archer : public HeroRegistry
{
	string h_race;
	string h_weapon;

public:
	void Read(ostream& out, istream& in) override
	{
		HeroRegistry::Read(out, in);
		out << "Enter race: ";
		in >> h_race;
		out << "Enter Weapon: ";
		in >> h_weapon;
	}

	void Write(ostream& out) const
	{
		HeroRegistry::Write(out);
		out << "Your Race is " << h_race << endl;
		out << "and the weapon of your choice is " << h_weapon << endl;
	}

	void Read(ifstream& in) override
	{
		HeroRegistry::Read(in);
		in >> h_race;
		in >> h_weapon;
	}

	void Write(ofstream& out)const override
	{
		HeroRegistry::Write(out);
		out << h_race << endl;
		out << h_weapon << endl;
	}

	int GetType() const override
	{
		return 1;
	}
};

