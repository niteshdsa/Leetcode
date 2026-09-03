class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int totalSum = 0;

       // Total sum nikalna hai
       for(int i = 0; i <=nums.size() - 1; i++)
       {
        totalSum = totalSum + nums[i];
       }

       // left and right sum nikalna hai har index pr

       int leftSum = 0;

       for(int i = 0; i <= nums.size() - 1; i++)
       {
        double rightSum = totalSum - nums[i] - leftSum;

        if(rightSum == leftSum)
        {
            return i;
        }
        leftSum = leftSum + nums[i];
       }
       return -1;
    }
};