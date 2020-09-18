#include "Gold.h"

double Gold::discount(double Sum)
{
 double afterdisc = Sum - (Sum * 15 / 100);
 return afterdisc;
}
