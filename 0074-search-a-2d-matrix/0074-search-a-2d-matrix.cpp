class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();   // ye hmko btata hai ki total rows kitne hai
        int m = matrix[0].size();   // ye hmko btata hai ki total columns kitne hai
        int start = 0;
        int end = (n * m) - 1;

        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            int row = mid / m;   // in dono ka use hm 1D ko 2D me convert krne ke liye krte hai
            int col = mid % m;
            if(matrix[row][col] == target)
            {
                return true;
            }
            else if(matrix[row][col] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return false;
    }
};