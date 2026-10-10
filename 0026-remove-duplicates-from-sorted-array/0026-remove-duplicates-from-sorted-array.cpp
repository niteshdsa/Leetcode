class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] != nums[i - 1])
            {
                count++;
                nums[count] = nums[i];
            }
        }
        return count + 1;   // yha prcount + 1 isliye use hua hai kyuki element count se 1 jayada hai
    }
};