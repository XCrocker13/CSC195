

#include <iostream>
using namespace std;

int main()
{
	int amountOfDice;
	cout << "Enter the amount of dice you want: ";
	cin >> amountOfDice;
	cout << "\nRolling " << amountOfDice << " dice...";

	for (int i = 1; i <= amountOfDice; i++) 
	{
		int roll = rand() % 6 + 1;
		cout << "Dice " << i << ": " << roll <<" ";
	}
	return 0;
}
