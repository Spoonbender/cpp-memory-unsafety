#include "pch.h"
#include <iostream>

struct Student {
public:
	int id;
	int age;
};

Student *GetStudent(int id, int age) {
	Student temp;
	temp.id = id;
	temp.age = age;
	return &temp;
}

int main()
{
	Student* first = GetStudent(1, 34);
	fflush(stdin);
	printf("First Id = %d Age = %d\n", first->id, first->age);
    std::cout << "Hello World!\n"; 
}