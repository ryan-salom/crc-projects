#pragma once
#include <string>

using namespace std;

//Ryan Jonathan Salom CISP 400 AD1

//This program simulates 4 bank accounts with an increase or decrease of a certain percentage.
//Topics included are classes, objects, and display statements


class Employee
{
private:
	//private data members that are only exclusive to this class

	string firstName; //default value is ""
	string lastName;
	int monthlySalary; //default value is 0

public:
	//accessible to other parts of the program

	Employee(string, string, int);
	void setFirstName(string);
	string getFirstName();
	void setLastName(string);
	string getLastName();
	void setMonthlySalary(int);
	int getMonthlySalary();
	void increaseMonthlySalary(int);

};
