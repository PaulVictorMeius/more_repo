#pragma once
#include "bar.h"
class D :public C 
{
public:
	D() = default;
	void info()const override { std::cout << "Hello from class D\n"; C::info(); }
};