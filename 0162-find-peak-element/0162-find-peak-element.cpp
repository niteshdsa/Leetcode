class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        while(start < end)
        {
            int mid = start + (end - start) / 2;
            if(nums[mid] < nums[mid + 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;  // yha pr mid - 1 isliye nhi lete hai kyuki mid bhi peak element ho skta hai lekin binary search me phle hi ptta hota hai ki mid target element hai ki nhi 
            }
        }
        return start;
    }
};