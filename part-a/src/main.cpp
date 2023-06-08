#include <iostream>
#include <cstdlib>

#include "utility.hpp"
#include "MyClass.hpp"

int main(int argc, char* argv[])
{
	unsigned long count = std::strtoul(argv[1], nullptr, 10);

	for (unsigned char i = 0; i < count; ++i)
	{
		auto x = make_instance(i);
		std::cout << x << "\n";
	}

	return 0;
}
