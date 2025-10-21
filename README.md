# Student-Information-System
A C++ project for a Student Information System using OOP principles.
It manages student information and allows updating GPA using getter and setter methods.

# Key OOP Concepts:
Encapsulation: Private attributes (name, age, rollno, gpa) with controlled access.
Abstraction: Methods hide internal implementation (display(), changedetails(), grade()).
Constructor Overloading: Multiple ways to initialize Student objects.
Destructor: Object cleanup demonstration.

# Features
Display student details with calculated grades.
Update GPA safely using setter and getter.
Supports default, parameterized, and overloaded constructors.

# Classes
Student
Attributes: name, age, rollno, gpa (all private)
Methods:
Student(), Student(string n, int a, int r, double g), Student(string n, int r)
char grade() – Calculates letter grade
void setgpa(), double getgpa() – Getter/Setter
void changedetails() – Update GPA and display updated info
void display() – Show student info
~Student() – Destructor

# Author
Laeeq – Student Assignment
