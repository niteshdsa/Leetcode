class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        // Step 1: Lower Bound

        int start = 0;
        int end = nums.size() - 1;
        int first = -1;
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            if(nums[mid] >= target)
            {
                first = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        // Step 2: Upper Bound

        start = 0;
        end = nums.size() - 1;
        int upper = nums.size();
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            if(nums[mid] > target)
            {
               upper = mid;
               end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        // Step 3: Last position check

        int last = upper -1;

        // Step 4: Target is present or not
        
        if(first == -1 || nums[first] != target)
        {
            first = -1;
            last = -1;
        }
        return {first, last};
    }
};