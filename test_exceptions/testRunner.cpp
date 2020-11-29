/****************************************

* File Name : main.cpp

* Creation Date : 26-11-2020

* Last Modified : Saturday 28 November 2020 10:44:35 AM

* Created By :  Bhaskar Tallamraju

*****************************************/
#include <iostream>
#include <gtest/gtest.h>
#include "libraryCode.hpp"

using namespace std;

TEST(TestSquareRoot, NegativeValueTest)
{
    ASSERT_ANY_THROW(squareRoot(-9));
}
TEST(TestSquareRoot, PositiveValueTest)
{
    ASSERT_NO_THROW(squareRoot(81));
}

int main (int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

