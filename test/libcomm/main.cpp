//
// Created by caiomcg on 25/11/17.
//

#include <gtest/gtest.h>

TEST(SquareRootTest, PositiveNos) {
    EXPECT_EQ (18.0, 18.0);
}

TEST(SquareRootTest, PositiveNos2) {
    EXPECT_EQ (18.0, 18.0);
}
TEST(SquareRootTest, PositiveNos3) {
    EXPECT_EQ (18.0, 182.0);
}
TEST(SquareRootTest, PositiveNos4) {
    EXPECT_EQ (18.0, 18.0);
}
TEST(SquareRootTest, PositiveNos5) {
    EXPECT_EQ (18.0, 184.0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}