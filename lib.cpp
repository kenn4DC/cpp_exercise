#include "lib.h"
#include <iostream>

void print(int i)
{
	std::cout << i << std::endl;
}

void print(const char* s)
{
	std::cout << s;
}
