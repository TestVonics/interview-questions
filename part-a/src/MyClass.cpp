#include "MyClass.hpp"

void MyClass::setDatum(int new_datum)
{
    datum = new int(new_datum);
}

int MyClass::getDatum() const
{
    return *datum;
}

std::ostream& operator<<(std::ostream& os, const MyClass& mc)
{
    os << mc.getDatum();
    return os;
}
