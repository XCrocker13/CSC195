#pragma once
#include <iostream>
using namespace std;
class Player
{
private:
	string name;
	int score;

public:
	void setScore(int Score) 
	{
		this->score = Score;
	}

	int getScore() const
	{
		return score;
	}

	void setName(string Name)
	{
		this->name = Name;
	}

	string getName() const
	{
		return name;
	}

	void isHighScorer()
	{
		if (score > 5000) 
		{
			cout << "\nYou're the high scorer" << endl;
		}
		else 
		{
			cout << "\nToo bad, so sad" << endl;
		}
	}

	void display()
	{
		cout << "\nName:" << name << "\nScore: " << score << endl;
	}
};




