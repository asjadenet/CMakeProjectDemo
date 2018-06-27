// CMakeProjectDemo.cpp : Defines the entry point for the application.
//

#include "CMakeProjectDemo.h"
#include "calc.h"
#include "voltage.h"


int main()
{
	std::cout << "Hello CMake.\n";
	//std::cout << "2*3="<< multiply(2, 3) << "\n";
	std::cout << "voltage:" << voltage(4, 3) << "\n";
	getchar();
	return 0;
}
