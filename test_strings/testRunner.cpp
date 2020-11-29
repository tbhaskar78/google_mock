/****************************************

* File Name : main.cpp

* Creation Date : 26-11-2020

* Last Modified : Sunday 29 November 2020 01:24:22 PM

* Created By :  Bhaskar Tallamraju

*****************************************/
#include <iostream>
#include <gtest/gtest.h>
#include "libraryCode.hpp"

using namespace std;

// cstring cannot be compared using ASSERT_EQ but
// ASSERT_STREQ, ASSERT_STRNE, ASSERT_STRCASEEQ, ASSERT_STRCASENE
// ASSERT for fatal whereas EXPECT is non fatal
TEST(TestString, TestAddition)
{
    char inputString[] = "hello World";
    myToUpper(inputString);
    ASSERT_STREQ("HELLO WORLD", inputString);
    ASSERT_STRNE("BYE WORLD", inputString);
    EXPECT_STRCASENE("BYE WORLD", inputString);
    EXPECT_STRCASEEQ("Hello WORLD", inputString);
}

// string can be compared using ASSERT_EQ
TEST(TestString, TestAdditionCPPString)
{
    string inputString = "hello World";
    string str = myToUpper(inputString);
    ASSERT_EQ("HELLO WORLD", str);
}

int main (int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

