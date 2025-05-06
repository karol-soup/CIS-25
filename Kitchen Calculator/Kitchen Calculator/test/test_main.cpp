#include <gtest/gtest.h>

#include "../include/intoFL.h"
#include "../include/convertUnit.h"

// Function Test - intoFL (already partly done)
TEST(FunctionTest, IntoFLConversion) {
    EXPECT_DOUBLE_EQ(intoFL(2, 1), 16);   // cups to fl oz
    EXPECT_DOUBLE_EQ(intoFL(4, 2), 2);    // tbsp to fl oz
    EXPECT_DOUBLE_EQ(intoFL(18, 3), 3);   // tsp to fl oz
}

// Control Flow Test 
TEST(ControlFlowTest, ConvertUnitLogic) {
    EXPECT_DOUBLE_EQ(convertUnit(8, 1), 1);   // fl oz to cups
    EXPECT_DOUBLE_EQ(convertUnit(1, 2), 2);   // fl oz to tbsp
    EXPECT_DOUBLE_EQ(convertUnit(2, 3), 12);  // fl oz to tsp
    EXPECT_DOUBLE_EQ(convertUnit(5, 4), 5);   // fl oz to fl oz
}

// Edge Case Test
TEST(EdgeCaseTest, InvalidUnit) {
    EXPECT_DOUBLE_EQ(convertUnit(10, 5), -1); // invalid unit in convertUnit
    EXPECT_DOUBLE_EQ(intoFL(10, 0), -1);      // invalid unit in intoFL
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}