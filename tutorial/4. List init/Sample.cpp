#include "Sample.hpp"

#include <iostream>

Sample::Sample(char p1, int p2, float p3) : c1(p1), i2(p2), f3(p3)
{
	std::cout << "this->c1: " << this->c1 << std::endl;
	std::cout << "this->i2: " << this->i2 << std::endl;
	std::cout << "this->f3: " << this->f3 << std::endl;
}

Sample::~Sample()
{

}
