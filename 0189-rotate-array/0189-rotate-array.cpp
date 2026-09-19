class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());    // yha pr temp isisliye liye  hai kyuki nums agr code rhta to elements override ho jate

        for(int i = 0; i < nums.size(); i++)
        {
            temp[(i+k) % nums.size()] = nums[i];   // yha pr temp wale array me nums wale elements ko rkhte jana hai
        }

        // copy kr do temp wale array ko
        nums = temp;
    }
};