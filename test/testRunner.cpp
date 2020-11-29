/****************************************

* File Name : main.cpp

* Creation Date : 26-11-2020

* Last Modified : Thursday 26 November 2020 10:07:26 AM

* Created By :  Bhaskar Tallamraju

*****************************************/
#include <iostream>
#include <gtest/gtest.h>
#include "libraryCode.hpp"

using namespace std;

TEST(TestSample, TestAddition)
{
    ASSERT_EQ(2, add(1,1));
}

int main (int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

