#pragma once
#include "AskAge.h"
class AskName :
	public AskAge
{
	public:
	string name;
	AskName() {}

	void AskMethod() override
	{
		AskAge::AskMethod();
		cout << "������� ��� " << endl;
		cin >> name;
		cout << "Your name is: " << name << endl;
	};
};

