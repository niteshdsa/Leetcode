class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long largest = LLONG_MIN;
        long long secondMax = LLONG_MIN;
        long long thirdMax = LLONG_MIN;


        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > largest)
            {
                thirdMax = secondMax;
                secondMax = largest;
                largest = nums[i];
            }
            else if(nums[i] > secondMax && nums[i] != largest)
            {
                thirdMax = secondMax;
                secondMax = nums[i];
            }
            else if(nums[i] > thirdMax && nums[i] != secondMax && nums[i] != largest)
            {
                thirdMax = nums[i];
            }
        }
        if(thirdMax == LLONG_MIN)
        {
            return largest;
        }
        else
        {
            return thirdMax;
        }
    }
};