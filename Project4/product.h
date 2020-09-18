#pragma once
#include <iostream>
#include <string>	
using std::cout;
using std::cin;
using std::string;
using std::endl;
class product
{
protected:
	string Name;
	double Price;

public:
	virtual string GetName() { return Name; };
	virtual double GetPrice() { return Price; };
};

