#pragma once
#include "Card.h"
class Gold:public Card
{
public:
	
	
	 double discount(double Sum);
	Gold()
	{
		name = "gold";
	}
};

