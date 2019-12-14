#include "pch.h"
#include <iostream>

class Student {
public:
	int id;
	int age;
};

Student* GetStudent(int id, int age) {
	Student *temp = new Student();
	temp->id = id;
	temp->age = age;
	return temp;
}

int main()
{
	Student *student = GetStudent(1, 34);
	delete student;
	printf("Id = %d Age = %d\n", student->id, student->age);
}