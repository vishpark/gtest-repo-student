#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite,GivenStringHasNegatives){
    //Arrange
    StringCalculator objUnderTest;
    string input="-6,-5,4,3";
    int expectedValue=4;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}
