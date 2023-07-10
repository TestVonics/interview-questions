#pragma once
#include <iostream>

class MyClass
{
public:
	void setDatum(const int new_datum);
	int getDatum() const;

private:
	int *datum;
};
