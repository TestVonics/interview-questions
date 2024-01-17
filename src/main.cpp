#include <iostream>
#include <cstdlib>

/** An example class that manages some data.
 * The `datum` member is meant to represent an arbitrary structure that this
 * class is reponsible for managing.
 */
class ExampleClass
{
public:
    ExampleClass(int datum);

    const int& getDatum() const;

private:
    int* datum;
};

int main(int argc, char* argv[])
{
    unsigned long count = std::strtoul(argv[1], nullptr, 10);

    for (unsigned char i = 0; i < count; ++i)
    {
        auto x = ExampleClass{ i };
        std::cout << x.getDatum() << "\n";
    }

    return 0;
}

ExampleClass::ExampleClass(int datum)
    : datum{ new int(datum) }
{ }

const int& ExampleClass::getDatum() const
{
    return *datum;
}
