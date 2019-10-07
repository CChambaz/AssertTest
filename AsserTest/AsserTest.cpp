#include "TestClass1.h"
#include "TestClass2.h"
#include <iostream>

int main()
{
	TestClass1 test1;
	TestClass2 test2;

	test1.SetValues(1, 2);
	test1.TestFooBarEquality();

	test2.SetValues(3, 2);
	test2.TestFooSuperiority();

    std::cout << "Hello World!\n"; 
}
