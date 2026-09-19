class Solution {
    private:
         bool valid(char ch)   // valid character hai ki nhi wo check kr rha hai mtlb 'alphanumeric' hai ya nhi
         {
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
            {
                return 1;
            }
            return 0;
         }

    char toLowerCase(char ch)    // iska mtlb hua ki agr small letter hai to same retuen krega aur agr capital letter hai to small letter bna ke return krega
{
    if( (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') )
    {
        return ch;
    }
    else
    {
      char temp = ch - 'A' + 'a';
      return temp;
    }
}   

bool checkPalindrome(string a)  // string ka palindrome check kr rha hai
{
    int s = 0;
    int e = a.length() - 1;

    while(s <= e)
    {
        if(a[s] != a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
public:
    bool isPalindrome(string s) {

        // faltu character ko hatana hai
        string temp = "";

        for(int j = 0; j < s.length(); j++)
        {
            if(valid(s[j]))
            {
                temp.push_back(s[j]);
            }
        }

        // lowercase me kr do
        for(int j = 0; j < temp.length(); j++)
        {
            temp[j] = toLowerCase(temp[j]);
        }
        
        // check palindrome
        return checkPalindrome(temp);
    }
};