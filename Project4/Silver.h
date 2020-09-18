#pragma once
#include "Card.h"
class Silver:public Card
{
public:
	double discount(double Sum);
	Silver()
	{
		name = "Silver";
	}
};

