#include "gtest/gtest.h"
#include "RelativeSortArray/RelativeSortArray.hpp"


namespace LeetCodeCxx::Tests
{
    TEST(LeetCodeCxxTests, relativeSortArray)
    {
        std::vector<int> arr1{2,3,1,3,2,4,6,7,9,2,19};
        std::vector<int> arr2{2,1,4,3,9,6};
        std::vector<int> expected{2,2,2,1,4,3,3,9,6,7,19};
        std::vector<int> result = Problems::relativeSortArray(arr1, arr2);
        EXPECT_EQ(result, expected);
    }
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
