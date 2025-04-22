#pragma once
#include <string>
#include <iostream>
using namespace std;
class Item
{
private:
	string name;
	int quantity;
	double price;
public:
	void setName(string Name)
	{
		this->name = Name;
	}
	string getName() const
	{
		return name;
	}

	void setQuantity(int Quantity);

	int getQuantity() const
	{
		return quantity;
	}

	void setPrice(int Price)
	{
		this->price = Price;
	}
	double getPrice() const
	{
		return price;
	}

	void Display()
	{
		cout << setName, " ", setQuantity, " ", setPrice, " ", total;
	}

	void total()
	{
		int total = quantity * price;
	}
};

