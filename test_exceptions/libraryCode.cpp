/****************************************

* File Name : libraryCode.cpp

* Creation Date : 26-11-2020

* Last Modified : Saturday 28 November 2020 10:42:04 AM

* Created By :  Bhaskar Tallamraju

*****************************************/
#include "libraryCode.hpp"

int squareRoot (int a)
{
    if (a < 0)
    {
        throw std::runtime_error("Negative value passed");
    }
    return sqrt(a);
}

