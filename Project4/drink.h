#pragma once
#include "product.h"
class drink :public product
{
	double Capacity;
public:
	drink() = default;
	drink(string _Name, double _Price, double _Capacity);


	string GetName() override;
	double GetPrice()override;
	double GetCapacity();
};

