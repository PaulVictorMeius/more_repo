#pragma once
#include <iostream>
#include <memory>
class C 
{
public:
	C() = default;
	virtual ~C() = default;
	virtual void info()const = 0 { std::cout << "Hi from class C\n"; }
};