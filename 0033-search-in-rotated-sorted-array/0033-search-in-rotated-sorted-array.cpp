class Solution {
public:
int getPivot(vector<int>&nums, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    
    while(s < e)
    {
        if(nums[mid] >= nums[0])
        {
           s = mid + 1;
        }
        else{
            e = mid; 
        }

        mid = s + (e - s) / 2;
    }

    return e;   // yha pr return s bhi krenge to same hi outpet ayega 
}

int BinarySearch(vector<int>&nums, int s, int e, int target)
{

    int start = s;
    int end = e;

    int mid = (start + end)/2;   // mid int range ke bahar na jaye iske liye mid = start + (end - start)/2 
    

    while(start<=end)
     {

        if(nums[mid] == target) 
        {
            return mid;
        }

        // go to right wala part
        if(target> nums[mid])
         {
          start  = mid + 1;
        }
        else  // mid < key
        {  
            end = mid - 1;
        }

        mid = (start + end)/2;
    }
    return -1;
}

    int search(vector<int>& nums, int target) {
      int pivot =getPivot(nums, nums.size());
      if(target >=nums[ pivot] && target <= nums[nums.size() - 1]){
        return BinarySearch(nums,pivot,nums.size()-1,target);
      }
      else{
        return BinarySearch(nums,0,pivot-1,target);
      }
    }
};