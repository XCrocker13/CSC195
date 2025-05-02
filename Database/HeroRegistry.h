#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

enum HeroType
{
	ARCHER = 1,
	BARBARIAN = 2
};

class HeroRegistry
{
protected:
	string h_name;
	int h_level;

public:
	virtual ~HeroRegistry() = default;

	virtual void Read(ostream& out, istream& in) 
	{
		out << "Enter Hero name: ";
		in >> h_name;
		out << "Enter Hero level: ";
		in >> h_level;
	}

	virtual void Write(ostream& out) const 
	{
		out << "Your hero name is " << h_name << endl;
		out << "and your level is " << h_level << endl;
	}

	virtual void Read(ifstream& istream)
	{
		istream >> h_name >> h_level;
	}

	virtual void Write(ofstream& ostream) const
	{
		ostream << h_name << endl << h_level << endl;
	}

	virtual int GetType() const = 0;

	friend istream& operator>>(istream& in, HeroRegistry& hero) {
		hero.Read(cout, in);
		return in;
	}

	friend ostream& operator<<(ostream& out, const HeroRegistry& hero) {
		hero.Write(out);
		return out;
	}

	friend ifstream& operator>>(ifstream& in, HeroRegistry& hero) {
		hero.Read(in);
		return in;
	}

	friend ofstream& operator<<(ofstream& out, const HeroRegistry& hero) {
		hero.Write(out);
		return out;
	}
};

