#include <iostream>
#include <vector>

std::vector<int> two_sum(std::vector<int>& nums,int target)
{
    static short size = nums.size();
    
    for (short i = 0; i < size; i++)
    {
        for (short j = i + 1; j < size; j++)
        {
            if (nums[j] == target - nums[i])
            {
                return std::vector<int>{i,j};
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
