#include <iostream>
#include <vector>
#include "Solution.h"

int main()
{
    std::vector<int> vec = { 1,2,3,4,5,6 };
    int target = 4;
    Solution searchSolution;
    int result = searchSolution.search(vec, target);
    std::cout << result << std::endl;

    std::vector<int> vec1 = { 1,2,2,2,2,2,2,2,2,2,3,4,5,6,2,2,2 };
    int removeTarget = 2;
    int resultLength = searchSolution.removeElement(vec1, removeTarget);
    std::cout << resultLength << std::endl;

}


    int Solution::search(std::vector<int>& nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right)
        {
            int middle = left + (right - left) / 2;
            if (nums[middle] < target)
            {
                left = middle + 1;
            }
            else if (nums[middle] > target)
            {
                right = middle - 1;
            }
            else
            {
                return middle;
            }
        }
        return -1;

    }
    int Solution::removeElement(std::vector<int>& nums, int val)
    {
        int slowIndex = 0;
        for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++)
        {
            if (nums[fastIndex] != val)
            {
                nums[slowIndex++] = nums[fastIndex];
            }
        }
        return slowIndex;
    }

