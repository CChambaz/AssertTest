#pragma once

#include "TestClass1.h"
#include "cassert.h"

void TestClass1::SetValues(int f, int b)
{
	foo = f;
	bar = b;
};

bool TestClass1::TestFooBarEquality()
{
	cassert(foo == bar, "Foo has to be equal to Bar");
	return foo == bar;
};