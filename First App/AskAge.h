#pragma once
#include <iostream>
#include <clocale>
#include <string>
using namespace std;


class AskAge
{
public:
	int age;
	AskAge() { cout << "Empty constructor!" << endl; };

	virtual void AskMethod() 
	{
		cout << "¬ведите возраст " << endl;
		cin >> this->age;
		cout << "Your age is: " << age << endl;
	};
};
