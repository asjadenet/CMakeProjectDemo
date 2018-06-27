#include "voltage.h"
#include "calc.h"

double voltage(double resistance, double current)
{
	return multiply(resistance, current);
}
