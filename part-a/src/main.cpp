#include <iostream>
#include <cstdlib>

#include "MyClass.hpp"

MyClass make_instance(const int datum);

int main(int argc, char* argv[])
{
	unsigned long count = std::strtoul(argv[1], nullptr, 10);

	for (unsigned char i = 0; i < count; ++i)
	{
		auto x = make_instance(i);
		std::cout << x.getDatum() << "\n";
	}

	return 0;
}

MyClass make_instance(const int datum)
{
    MyClass mc;
    mc.setDatum(datum);
    return mc;
}