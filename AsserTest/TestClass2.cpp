#pragma once

#include "TestClass2.h"
#include "cassert.h"

void TestClass2::SetValues(int f, int b)
{
	foo = f;
	bar = b;
};

bool TestClass2::TestFooSuperiority()
{
	cassert(foo > bar, "Foo has to be superior to Bar");
	return foo > bar;
};