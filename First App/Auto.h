#pragma once
#include <string>
#include <iostream>

using namespace std;
class Auto
{
	friend void drive(Auto &obj);
	friend void setPrice(Auto &obj, int price);

private:
	string name;
	int price;

public:
	Auto(string name, float price) {
		this->name = name;
		this->price = price;
	};
	string getName() { return name; };
	int getPrice() {return price; };
};

