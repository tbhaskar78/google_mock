/****************************************

* File Name : libraryCode.cpp

* Creation Date : 26-11-2020

* Last Modified : Sunday 29 November 2020 01:24:40 PM

* Created By :  Bhaskar Tallamraju

*****************************************/
#include "libraryCode.hpp"

void myToUpper (char *inputString)
{
    for(int i = 0 ; i < strlen(inputString); i++)
    {
        inputString[i] = toupper(inputString[i]);
    }
}

std::string myToUpper(std::string inputString)
{
    for(int i = 0 ; i < inputString.length(); i++)
    {
        inputString[i] = std::toupper(inputString[i]);
    }
    return inputString;
}

