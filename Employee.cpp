//Ryan Jonathan Salom CISP 400 AD1
//header file



#include <iostream>
#include "Employee.h"
using namespace std;


//constructor that initializes data members
Employee::Employee(string theFirst, string theLast, int theSalary) {
	setFirstName(theFirst);
	setLastName(theLast);
	setMonthlySalary(theSalary);
}

void Employee::setFirstName(string theFirst) {
	firstName = theFirst;
}

string Employee::getFirstName() {
	return firstName;
}

void Employee::setLastName(string theLast) {
	lastName = theLast;
}

string Employee::getLastName() {
	return lastName;
}

void Employee::setMonthlySalary(int theSalary) {
	monthlySalary = theSalary;
	//checks if this is negative
	if (monthlySalary <= 0) {
		cout << " XX Employee: " << firstName << " " << lastName << "s inputted salary is " << monthlySalary
			<< endl << " ** The salary is set to $1000. **" << endl << endl;
		monthlySalary = 1000;
	}
}

int Employee::getMonthlySalary() {
	//code
	return monthlySalary;
}

//calculates percentage increase or decrease
void Employee::increaseMonthlySalary(int number) {
	if (number < 0)
		cout << "--- ";
	else
		cout << "+++ ";

	cout << "Employee: " << firstName << " " << lastName;
	cout << " has a salary adjustment of " << number << " %\n";
	cout << "The original monthlySalary is $" << monthlySalary << std::endl;
	//increse monthly salary by percFactor %.
	monthlySalary = monthlySalary + (monthlySalary * (number / 100.0));
	cout << "The new monthly salary is $" << monthlySalary << std::endl << std::endl;
}

