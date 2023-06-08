#pragma once
#include <iostream>

class MyClass
{
public:
	void setDatum(int);
	int getDatum() const;

private:
	int *datum;
};

std::ostream& operator<<(std::ostream& os, const MyClass& mc);
