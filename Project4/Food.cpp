#include "Food.h"

food::food(string _Name, double _Price)
{
	Name = _Name;
	Price = _Price;

}

food::food(string _Name, double _Price, double _Mass)
{
	Name = _Name;
	Price = _Price;
	Mass = _Mass;

}

string food::GetName()
{
	return Name;
}

double food::GetPrice()
{
	return Price;
}

double food::GetMass()
{
	return Mass;
}
