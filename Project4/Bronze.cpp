#include "Bronze.h"

double Bronze::discount(double Sum)
{
	double afterdisc = Sum - (Sum * 5 / 100);
	return afterdisc;
}
