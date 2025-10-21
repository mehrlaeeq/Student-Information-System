#include <iostream>
#include "student.h"
using namespace std;
//Default Constructor
Student::Student() {
	name = "unknown";
	age = 0;
	rollno = 0;
	gpa = 0.0;
}
//Parameterized Constructor
Student::Student(string n, int a, int r, double g) {
	name = n;
	age = a;
	rollno = r;
	gpa = g;
}
//Constructor Overloading (name and rollno as arguments only).
Student::Student(string n, int r) {
	name = n;
	age = 0;
	rollno = r;
	gpa = 0.0;
}
//Grade Calculation
char Student::grade() {
	if (gpa >= 3.5) return 'A';
	else if (gpa >= 3.0) return 'B';
	else if (gpa >= 2.5) return 'C';
	else if (gpa >= 2.0) return 'D';
	else return 'F';
}
//Setters and Getters
void Student::setgpa() {
	cout << "Enter GPA: ";
	cin >> gpa;
}
double Student::getgpa() {				// All other attributes 
	return gpa;							// can be changed or 
}										// updated with this
//Function to change details			// exact same method
void Student::changedetails() {			// of setters and getters
	setgpa(); //setting GPA using setter
	cout << "GPA of " << name << " successfully updated to " << getgpa() << endl; //getting GPA using Getter
	cout << "\nUpated Student Details: " << endl;
	display();
}										
// All Other Attributes can be changed with this exact same method using getters and setters

//Destructor
Student::~Student() {
	cout << "Destructor called for " << name << "." << endl;
}
//Display Function
void Student::display() {
	cout << "Name: " << name << " | Age: " << age << " | Rollno: " << rollno << " | GPA: " << gpa << " | Grade: " << grade() << endl << endl;
}