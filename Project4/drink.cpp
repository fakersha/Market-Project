#include "drink.h"

drink::drink(string _Name, double _Price, double _Capacity)
{
	Name = _Name;
	Price = _Price;
	Capacity = _Capacity;
}

string drink::GetName()
{
	return Name;
}

double drink::GetPrice()
{
	return Price;
}

double drink::GetCapacity()
{
	return Capacity;
}
