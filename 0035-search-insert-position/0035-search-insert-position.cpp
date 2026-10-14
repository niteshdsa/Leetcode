class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int ans = nums.size();    // yha lower bound ke jaisa -1 isiliye nhi liye hai kyuki agr tagert array ke element se bda ho to array ka size hi uska index ho jayega  

        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            if(nums[mid] >= target)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};