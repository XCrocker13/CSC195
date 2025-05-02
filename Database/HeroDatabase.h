#pragma once
#include <vector>
#include <memory>
#include "Archer.h"
#include "Barbarian.h"

using namespace std;

class HeroDatabase
{
	vector<unique_ptr<HeroRegistry>> h_heros;

public:
	~HeroDatabase() = default;

	void Add(unique_ptr <HeroRegistry> hero)
	{
		h_heros.push_back(move(hero));
	}

	unique_ptr <HeroRegistry> Create(int type)
	{
		switch (type)
		{
		case ARCHER: return make_unique<Archer>();
		case BARBARIAN: return make_unique<Barbarian>();
		default: return nullptr;
		}
	}

	void DisplayAll()
	{
		for (const auto& hero : h_heros)
		{
			cout << *hero << endl;
		}
	}

	void Load(const string& filename)
	{
		ifstream input(filename);
		if (input.is_open())
		{
			h_heros.clear();
			while (!input.eof()) {
				int type;
				input >> type;
				if (input.fail()) break;

				auto hero = Create(type);
				if (hero) {
					input >> *hero;
					Add(std::move(hero));
				}
			}
		}
	}

	void Save(const string& filename)
	{
		ofstream output(filename);
		if (output.is_open())
		{
			for (const auto& hero : h_heros)
			{
				output << hero->GetType() << endl;
				output << *hero;
			}
		}
	}
};

