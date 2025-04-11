#include <iostream>
using namespace std;
struct Person
{
	char name[32];
	int id;
};
void Square(int& i);
void Double(int* i);
int main()
{
	// ** REFERENCE **
	//
	// declare an int variable and set the value to some number (less than 10)
	int num = 7;
	// declare a int reference and set it to the int variable above
	int& ref_num = num;
	// output the int variable
	cout << "Number before changing reference Number: " << num << endl;
	cout << "Reference Number before change: " << ref_num << endl;
	// set the int reference to some number
	ref_num = 30;
	// output the int variable
	cout << "Reference Number after change: " << ref_num << endl;
	cout << "Number after changing reference Number: " << num << endl;
	cout << "Reference Number after change: " << ref_num << endl;
	// what happened to the int variable when the reference was changed? (insert answer)
	// When you change the reference numbe the first number variable changes since both numbers are linked together
	

	// output the address of the int variable
	int* p_int;
	p_int = &num;
	cout << "\nAddress of the number is: "<< &num << endl;
	// output the address of the int reference
	int* p_ref;
	p_ref = &ref_num;
	cout << "\nAddress of the reference number is: " << &ref_num << endl;
	// are the addresses the same or different? (insert answer)
	// The addresses are the same though the address does change everytime I run the program due to not storing the adresss to the heap


	// ** REFERENCE PARAMETER **
	cout << "\nBefore Square function: " << num << endl;
	Square(num);
	cout << "After Square function: " << num << endl;
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter(i = i * i)
	// call the Square function with the int variable created in the REFERENCE section
	// output the int variable to the console
	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""
	// ** POINTER VARIABLE **
	p_int = &num;

	cout << "\nPointer address: " << p_int << endl;
	cout << "Value at pointer (dereferenced): " << *p_int << endl;
	// declare an int pointer, set it to nullptr (it points to nothing)
	// set the int pointer to the address of the int variable created in the REFERENCE section
	// output the value of the pointer
	// what is this address that the pointer is pointing to? (insert answer)
	// output the value of the object the pointer is pointing to (dereference the pointer)
	// ** POINTER PARAMETER **
	cout << "\nBefore Double function: " << num << endl;
	Double(p_int);
	cout << "After Double function: " << num << endl;
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter(i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLEsection
	// output the dereference pointer
	// output the int variable created in the REFERENCE section
	// did the int variable's value change when using the pointer?
}

void Square(int& i)
{
	i = i * i;
}

void Double(int* i)
{
	*i = (*i) * 2;
}