class Solution {
public:
    int search(vector<int>& nums, int target) {
       int start = 0;
       int end = nums.size() - 1;

       while(start <= end)
       {
         int mid = start + (end - start) / 2;

         if(nums[mid] == target)
         {
            return mid;
         }

         else if(nums[start] <= nums[mid])   // check krega ki left part array ka sorted hai ki nhi
         {
            if(target >= nums[start] && target < nums[mid])     // left me part me target me searh krega
            {
                 end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
         }

         else     // agar left part me nhi mila to right part me target ko search krega
         {
            if(target > nums[mid] && target <=  nums[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
         }
       } 
       return -1;
    }
};