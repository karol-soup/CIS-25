//
//  nan_review_tests.cpp
//  KitchenCalculator
//
//  Created by Nan Sayng on 5/15/25.
//
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















