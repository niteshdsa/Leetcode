class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int row = 0;
        int col = m - 1;  // isme bianry search jaisa start aur end ke jagah pr row aur col se initialise kiya hai

        while(row < n && col >= 0)   // col negative na ho isiliye aur dono condition true honi chahiye 
        {
            if(matrix[row][col] == target)
            {
                return true;
            }
            else if(matrix[row][col] > target)   // iska mtlb left me search krna hai
            {
                col--;
            }
            else       // nhi to niche ke side search krna hai
            {
                row++;
            }
        }
        return false;
    }
};