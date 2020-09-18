#pragma once
#include "Card.h"
class Bronze:public Card
{
public:
	double discount(double Sum);
	Bronze()
	{
		name = "Bronze";
	}
};

