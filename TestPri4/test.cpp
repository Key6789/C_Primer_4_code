#include "test.h"

void myTest::coutTest()
{
	std::cout << "/*";
	std::cout << "*/";
	//std::cout << /* "*/" */; ע??ԭ?????벻??
}

void myTest::WhileTest()
{
	int sum = 0, val = 1;
	// keep executing the while until val is greater than 10 
	while (val <= 10) {
		sum += val; // assigns sum + val to sum 
		++val; // add 1 to val 
	}
	std::cout << "Sum of 1 to 10 inclusive is "
		<< sum << std::endl;
}
