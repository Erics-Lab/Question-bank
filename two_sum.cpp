/*
    Objective of the code: To find the distinctive indexes (indices) of two numbers in a given integer vector nums, sum of which matches the given target.
*/

#include <iostream>
#include <vector>

std::vector<int> two_sum(std::vector<int>& nums,int target) //parameter list: vector of integers, target
{
    static short size = nums.size();    //store the length of the given integer vector
    
    for (short i = 0; i < size; i++)    //first pointer accessing vector sequentially
    {
        for (short j = i + 1; j < size; j++)    //second pointer pointing to the elements beyond the first pointer and access them sequentially
        {
            if (nums[j] + nums[i] == target)    //condition become true iff num[i]+num[j] equals to target
            {
                return std::vector<int>{i,j};   //return the target indexes (i and j)
            }
        }
    }

}

int main()  //testing
{
    std::vector<int> nums = {2,7,11,15}, int target = 9;

    nums = two_sum(nums, target);

    std::cout << '[' << nums[0] << ',' << nums[1] << ']' << std::endl;
}
