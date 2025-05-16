# Code Review by Nan Sayng

Review for: Karol

Branch reviewed: 'project1-tests'

Review Date: May 15th, 2025

Test cases added
- TEST(TestInitialInput, ValidInitialAmount)
- TEST(TestInitialInput, ZeroInitialAmount)
- TEST(TestInitialInput, NegativeInitialAmount)
- TEST(TestUnitInput, ValidStartUnit)
- TEST(TestUnitInput, InvalidStartUnit)

## Code Structure & CMake
- might be cleaner if only include only specific files that are used in the test cases rather than includes all source files via `${SOURCES}` in 'CmakeLists.txt'
- the input functions mixing with user input handling and validation which can make it hard to test which is not allowed to use exceptions like 'invalid_argument' (would be better to separate the logic)

## Modularity & Readability
- Title (suggest to use fewer asterisks or replace with spaces, center the title for cleaner readibility)
- Parameter names like 'sUnit', 'dUnit' are unclear and not really telling what's their purposes are
- Convert final decimal results to fractions for earier usage for the user
- suggest describing if one test unit is testing valid or invalid input

## Test Coverage
- covered the main coversion functions, but should consider some edge cases like zero input for initial amount
- could add more test cases for functions ('inputAmount', 'inputDesired', 'inputStart') to check if it's correctly accept the valid user inputs

## Bugs or Gaps Identified
- program should handle the condition when the user input zero for the initial amount
- suggest to inform the user that no conversion is needed when the initial unit and desired unit is the same
- good functions for user input validation, but suggest also considering invalid input like when the user accidentally input strings after the number

## Test Output & Clarity
- would improve user experience if the program has function to convert fractions into decimals instead of asking the users to do it manually
- suggesting adding messages why the test fail, it will make debugging easier

## 5 New Google Test Cases

```cpp
#include <gtest/gtest.h>
#include <stdexcept>

// updated test functions (extract apart from the input function which has the input handling)

// validate amount (must be > 0)
double validAmount(const double& amount){
    if(amount == 0){
        throw std::invalid_argument("The initial amount can't be zero.\n");
    }else if(amount < 0){
        throw std::invalid_argument("The initial amount must be positive.\n");
    }
    return amount;
}

// validate unit num (must be between 1 to 4)
int validStartUnit(const int& unitNum){
    if(unitNum < 1 || unitNum > 4){
        throw std::invalid_argument("Please enter between 1 to 4.\n");
    }
    return unitNum;
}

TEST(TestInitialInput, ValidInitialAmount){
    EXPECT_EQ(validAmount(12), 12);
    EXPECT_EQ(validAmount(89), 89);
    EXPECT_DOUBLE_EQ(validAmount(50.78), 50.78);
    EXPECT_DOUBLE_EQ(validAmount(5.44), 5.44);
}

TEST(TestInitialInput, ZeroInitialAmount){
    EXPECT_THROW(validAmount(0), std::invalid_argument); // zero input
}

TEST(TestInitialInput, NegativeInitialAmount){
    EXPECT_THROW(validAmount(-23), std::invalid_argument);
    EXPECT_THROW(validAmount(-1), std::invalid_argument);
    EXPECT_THROW(validAmount(-88), std::invalid_argument);
}

TEST(TestUnitInput, ValidStartUnit){
    EXPECT_EQ(validStartUnit(1), 1);
    EXPECT_EQ(validStartUnit(2), 2);
    EXPECT_EQ(validStartUnit(3), 3);
    EXPECT_EQ(validStartUnit(4), 4);
}

TEST(TestUnitInput, InvalidStartUnit){
    EXPECT_THROW(validStartUnit(-1), std::invalid_argument);
    EXPECT_THROW(validStartUnit(0), std::invalid_argument);
    EXPECT_THROW(validStartUnit(5), std::invalid_argument);
    EXPECT_THROW(validStartUnit(33), std::invalid_argument);
}
