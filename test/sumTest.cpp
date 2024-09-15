#include <gtest/gtest.h>
#include <sum.hpp>

class SumTest : public ::testing::Test
{

};

TEST_F(SumTest, Sum)
{
    sum s;
    EXPECT_EQ(s.add2Integers(1, 1), 2);
}

int main()
{
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
