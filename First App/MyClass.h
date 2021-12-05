#pragma once
#include "IMyClass.h"
#include <iostream>
using namespace std;
class MyClass :
	public IMyClass
{
public:
	void foo() override
	{
		cout << "фунгуе" << endl;
	}
};

