#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite,GivenEmptyStringZeroIsExpected){
    //Arrange
    StringCalculator objUnderTest;
    string input="";
    int expectedValue=60;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}
