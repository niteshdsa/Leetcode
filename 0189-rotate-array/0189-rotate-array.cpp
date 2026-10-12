class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        int temp = nums[n - 1];

        // Step 1: Reverse the last K elements
        int start = nums.size() - k;
        int end = nums.size() - 1;
        while(start < end)
        {
            swap(nums[start++], nums[end--]);
        }

        // Step 2: Reverse the remaining elements
        start = 0;
        end = nums.size() - k - 1;
        while(start < end)
        {
            swap(nums[start++], nums[end--]);
        }

        // Step 3: Reverse the entire elements
        start = 0;
        end = nums.size() - 1;
        while(start < end)
        {
            swap(nums[start++], nums[end--]);
        }

        
    }
};