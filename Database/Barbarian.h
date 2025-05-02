#pragma once
#include "HeroRegistry.h"

class Barbarian : public HeroRegistry
{
	string h_race;
	int h_strength;

public:
	void Read(ostream& out, istream& in) override
	{
		HeroRegistry::Read(out, in);
		out << "Enter race: ";
		in >> h_race;
		out << "Enter Strength: ";
		in >> h_strength;
	}

	void Write(ostream& out) const
	{
		HeroRegistry::Write(out);
		out << "Your Race is " << h_race << endl;
		out << "Your Strength is  " << h_strength << endl;
	}

	void Read(ifstream& in) override
	{
		HeroRegistry::Read(in);
		in >> h_race;
		in >> h_strength;
	}

	void Write(ofstream& out)const override
	{
		HeroRegistry::Write(out);
		out << h_race << endl;
		out << h_strength << endl;
	}

	int GetType() const override
	{
		return 2;
	}
};

