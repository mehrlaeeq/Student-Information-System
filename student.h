#pragma once
#include <iostream>
#include <string>
using namespace std;
class Student {
private:
	//Encapsulation
	string name;
	int age, rollno;
	double gpa;
public:
	//Constructors
	Student();	//Default Constructor
	Student(string n, int a, int r, double g);	//Parameterized Constructor
	Student(string n, int r);	//Constructor Overloading
	char grade();	//Grade Calculation
	
	//Encapsulation Methods
	void setgpa(); // setter for gpa
	double getgpa(); // getter for gpa
	//setters and getters for other attributes can be declared similarly
	
	void changedetails(); //Function to change details
	
	~Student();	//Destructor
	
	void display();	//Display Function
};