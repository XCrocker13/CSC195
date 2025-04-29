// Streams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

//Reasons to pass by reference
//for classes like ostream/istream, cannot make copies, so pass by reference
//ensure manipulation of variables inside the main method
//you want to pass it by reference to save memory and it happens instantly 
//Avoid creating copies for large data types
//Youll become more effeicient by saving time and resourses
//Rule of thumb: use pass-by-reference whenever possible | Exception: 


//overloading methods same name different parameters
void Write(const vector<int> numbers, ofstream& ostream)
{
	for (int n : numbers)
	{
		ostream << n << endl;
	}
}

void Read(vector<int>& numbers, ifstream& istream)
{
	while (!istream.eof())
	{
		int n;
		istream >> n;

		numbers.push_back(n);
	}
}

//------------------------------------------------------------
//original methods
void Read(string& text, ifstream& istream)
{
	istream >> text;
}

void Write(string text, ostream& ostream)
{
	//text = "ha!"; -- avoid manipulation of values passed as parameters
	ostream << text;
}
//-------------------------------------------------------------

int main()
{
	string text = "Hello me\n";
	cout << text;

	//cin >> text;
	getline(cin, text);
	//cout << text << endl;

	Write(text, cout);
	
	//output to file
	ofstream output("data.txt");
	//output << text;
	Write(text, output);
	int i = 5;
	output << i << endl;
	output.close();

	text = "";
	ifstream input("data.txt");
	getline(input, text);
	//input >> text;
	input >> i;
	input.close();

	cout << "reading from file:" << endl;
	cout << text << endl;
	cout << i << endl;

	vector<int> numbers = { 1,2,3,4 };
	//store vector to file
	output.open("numbers.txt");
	Write(numbers,output);
	output.close();

	numbers.clear();

	//read vector from file
	input.open("number.txt");
	Read(numbers,input);
	input.close();

	for (int n : numbers)
	{
		cout << n << endl;
	}
}