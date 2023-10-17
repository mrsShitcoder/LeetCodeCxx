#include "RelativeSortArray.hpp"

#include <algorithm>

namespace Problems
{
    std::vector<int> relativeSortArray(std::vector<int>& arr1, std::vector<int>& arr2)
    {
        if (arr1.empty() || arr2.empty())
        {
            return arr1;
        }

        int maxElement = *std::ranges::max_element(arr1);
        std::vector<int> count(maxElement + 1, 0);
        for (int element : arr1)
        {
            ++count[element];
        }

        std::vector<int> result;

        for (int element : arr2)
        {
            while (count[element] > 0)
            {
                result.emplace_back(element);
                --count[element];
            }
        }

        for (int element = 0; element <= maxElement; ++element)
        {
            while (count[element] > 0)
            {
                result.emplace_back(element);
                --count[element];
            }
        }

        return result;
    }
}