#include "utility.hpp"

MyClass make_instance(int datum)
{
    MyClass mc;
    mc.setDatum(datum);
    return mc;
}
