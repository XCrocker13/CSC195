#include <iostream>
using namespace std;

int main()
{
	string name;
	char initial;
	short age;
	bool isAdult;
	unsigned int zipcode;
	float wage;
	short daysWorked;
	float hoursWorkedPerDay[7];

	const float TAX = 0.1f;

	cout << "Enter First name: ";
	cin >> name;

	cout << "Enter the initial of your Last name: ";
	cin >> initial;

	cout << "Enter your age: ";
	cin >> age;

	isAdult = (age >= 18);
	if (isAdult) {

	cout << "Enter your Zipcode: ";
	cin >> zipcode;

	cout << "Enter Your desired hourly wage: ";
	cin >> wage;

	cout << "Enter the amount of days you worked. (Maximum 7): ";
	cin >> daysWorked;


		float totalHours = 0;
		for (int i = 0; i < daysWorked; i++)
		{
			cout << "Enter the hours you worked for day " << (i + 1)
				<< ": ";
			cin >> hoursWorkedPerDay[i];

			totalHours += hoursWorkedPerDay[i];
		}

		float grossIncome = totalHours * wage;
		float taxAmount = grossIncome * TAX;
		float netIncome = grossIncome - taxAmount;

		cout << "\nEmployee Payroll Summary\n";
		cout << "-------------------------\n";
		cout << "Name: " << name << " " << initial << ".\n";
		cout << "Age: " << age << " (Adult: " << (isAdult ? "Yes" : "No") << ")\n";
		cout << "Zipcode: " << zipcode << "\n";
		cout << "Hourly Wage: $" << wage << " per hour\n";
		cout << "Total Hours Worked: " << totalHours << " hours\n";
		cout << "Gross Income: $" << grossIncome << "\n";
		cout << "Tax Amount: $" << taxAmount << "\n";
		cout << "Net Income: $" << netIncome << "\n";
	}
	else {
		cout << "You dont qualify \n";
	}
	return 0;
}