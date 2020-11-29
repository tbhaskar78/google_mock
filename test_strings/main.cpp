/****************************************

* File Name : main.cpp

* Creation Date : 26-11-2020

* Last Modified : Saturday 28 November 2020 11:07:13 AM

* Created By :  Bhaskar Tallamraju

*****************************************/
#include <iostream>
#include "libraryCode.hpp"

using namespace std;


int main (int argc, char *argv[])
{
    char inputString[] = "Hello World";
    myToUpper(inputString);
    cout << "Main App \n" << "to upper  = " << inputString << endl;
    return 0;
}

