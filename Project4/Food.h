#pragma once
#include "product.h"
class food : public product
{
protected:
	double Mass;
public:
	food() = default;
	food(string _Name, double _Price);
	food(string _Name, double _Price, double _Mass);

	string GetName()override;
	double GetPrice()override;
	double GetMass();
};
