#include "pch.h"
#include "..\github_edabit\0 _ReturnTrue.cpp"
#include "..\github_edabit\1_Addition.cpp"
#include "..\github_edabit\2_ReturnIncremented.cpp"
#include "..\github_edabit\3_Remainder.cpp"
#include "..\github_edabit\4_Reverse.cpp"
#include "..\github_edabit\5_FarmProblem.cpp"
#include "..\github_edabit\6_triArea.cpp"
#include "..\github_edabit\7_CorrectMistakes.cpp"
#include "..\github_edabit\8_HowManySeconds.cpp"
#include "..\github_edabit\9_MinutesToSeconds.cpp"
#include "..\github_edabit\10_IsEqual.cpp"
#include "..\github_edabit\11_HoursAndMinutes.cpp"
#include "..\github_edabit\12_RecPerimeter.cpp"
#include "..\github_edabit\13_PowerCalc.cpp"
#include "..\github_edabit\14_UnitConverter.cpp"
TEST(Test0, TestReturnTrue) {
    ReturnTrue rt;
    EXPECT_TRUE(rt.returnTrue());
}
TEST(Test1, TestAddition) {
    // Create an instance of the Addition class with specific values
    Addition adder(0, 0);
    // Test addition method
    EXPECT_EQ(5, adder.addition(2, 3));
    EXPECT_EQ(-9, adder.addition(-3, -6));
    EXPECT_EQ(10, adder.addition(7, 3));
}
TEST(Test2, TestReturnIncremented) {
    // Create an instance of the ReturnIncremented class
    ReturnIncremented incrementer(0);
    // Test returnIncremented method
    EXPECT_EQ(3, incrementer.returnIncremented(2));
    EXPECT_EQ(-8, incrementer.returnIncremented(-9));
    EXPECT_EQ(1, incrementer.returnIncremented(0));
    EXPECT_EQ(1000, incrementer.returnIncremented(999));
    EXPECT_EQ(74, incrementer.returnIncremented(73));
}
TEST(Test3, TestRemainder) {
    // Create an instance of the Remainder class
    Remainder remainderCalculator(0,0);
    // Test remainder method
    EXPECT_EQ(1, remainderCalculator.remainder(7, 2));
    EXPECT_EQ(3, remainderCalculator.remainder(3, 4));
    EXPECT_EQ(-9, remainderCalculator.remainder(-9, -45));
    EXPECT_EQ(0, remainderCalculator.remainder(5, 5));
}
TEST(Test4, TestReverse) {
    // Test reverse function
    EXPECT_EQ(false, reverse(true));
    EXPECT_EQ(true, reverse(false));
}
TEST(Test5, animals) {
    // Test animals method
    EXPECT_EQ(50, animals(5, 2, 8));
    EXPECT_EQ(50, animals(3, 4, 7));
    EXPECT_EQ(22, animals(1, 2, 3));
    EXPECT_EQ(34, animals(3, 5, 2));
    EXPECT_TRUE(true);
}
TEST(test6, triArea) {
    EXPECT_EQ(3, triArea(3, 2));
    EXPECT_EQ(10, triArea(5, 4));
    EXPECT_EQ(50, triArea(10, 10));
    EXPECT_EQ(0, triArea(0, 60));
    EXPECT_EQ(66, triArea(12, 11));
    EXPECT_TRUE(true);
}
TEST(test7, squared) {
    EXPECT_EQ(100, squared(10));
    EXPECT_EQ(4761, squared(69));
    EXPECT_EQ(443556, squared(666));
    EXPECT_EQ(441, squared(-21));
    EXPECT_EQ(441, squared(21));
    EXPECT_TRUE(true);
}
TEST(test8, howManySeconds) {
    EXPECT_EQ(7200, howManySeconds(2));
    EXPECT_EQ(36000, howManySeconds(10));
    EXPECT_EQ(86400, howManySeconds(24));
    EXPECT_EQ(129600, howManySeconds(36));
    EXPECT_TRUE(true);
}
TEST(test9, convertToSeconds) {
    EXPECT_EQ(360, convertToSeconds(6));
    EXPECT_EQ(240, convertToSeconds(4));
    EXPECT_EQ(480, convertToSeconds(8));
    EXPECT_EQ(3600, convertToSeconds(60));
    EXPECT_TRUE(true);
}
TEST(test10, isEqual) {
    EXPECT_EQ(false, isEqual(4, 8));
    EXPECT_EQ(true, isEqual(2, 2));
    EXPECT_EQ(false, isEqual(0, 8));
    EXPECT_EQ(true, isEqual(1, 1));
    EXPECT_EQ(false, isEqual(12, 3));
    EXPECT_EQ(false, isEqual(5, 98));
    EXPECT_TRUE(true);
}
TEST(test11, convertIntoSeconds) {
    EXPECT_EQ(3600, convertIntoSeconds(1, 0));
    EXPECT_EQ(3780, convertIntoSeconds(1, 3));
    EXPECT_EQ(1800, convertIntoSeconds(0, 30));
    EXPECT_TRUE(true);
}
TEST(test12, perimeter) {
    EXPECT_EQ(26, perimeter(6, 7));
    EXPECT_EQ(60, perimeter(20, 10));
    EXPECT_EQ(22, perimeter(2, 9));
    EXPECT_TRUE(true);
}
TEST(test13, calculatePower) {
    EXPECT_EQ(2300, calculatePower(230, 10));
    EXPECT_EQ(9600, calculatePower(480, 20));
    EXPECT_EQ(330, calculatePower(110, 3));
    EXPECT_EQ(3808800, calculatePower(13800, 276));
    EXPECT_TRUE(true);
}
TEST(test14, inchesToFeet) {
    UnitConverter unitConverter;
    EXPECT_EQ(1, unitConverter.inchesToFeet(12));
    EXPECT_EQ(30, unitConverter.inchesToFeet(360));
    EXPECT_EQ(301, unitConverter.inchesToFeet(3612));
    EXPECT_EQ(27, unitConverter.inchesToFeet(324));
    EXPECT_EQ(251, unitConverter.inchesToFeet(3012));
    EXPECT_EQ(0, unitConverter.inchesToFeet(11));
}