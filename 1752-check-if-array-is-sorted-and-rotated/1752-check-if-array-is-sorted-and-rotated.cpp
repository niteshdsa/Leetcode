class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i - 1] > nums[i])  // aage wale element ko piche wale elment se compare kr rha hai 
            {
              count++;
            }  
        }
     if(nums[n - 1] > nums[0])   // last wale element ko phle wale element se compare kr rha hai
     {
     count++;
     }
     return count <= 1;
    } 
};