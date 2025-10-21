#include <iostream>
#include "student.h"
using namespace std;
int main() {
	//Object Creation
	Student s1; // Default constructor
	Student s2("Laeeq", 19, 240009, 3.2); // Parameterized constructor
	Student s3("Ali", 240010); // Constructor overloading
	int choice;

	// Displaying Student Details
	cout << "Student 1 (s1) details:" << endl;
	s1.display();
	cout << endl;
	cout << "Student 2 (s2) details:" << endl;
	s2.display();
	cout << endl;
	cout << "Student 3 (s3) details:" << endl;
	s3.display();
	cout << endl;
	// Changing Details using getters and setters
	cout << "Choose a student to update their GPA\n1. s1\n2. s2\n3. s3.\nyour Choice: ";
	cin >> choice;
	switch (choice) {
	//changing using setter and getter
	case 1: s1.changedetails(); 		break; 
	case 2: s2.changedetails(); 		break;
	case 3: s3.changedetails(); 		break;
		default: cout << "Invalid Choice!" << endl; 	break;
	}
	return 0;
}