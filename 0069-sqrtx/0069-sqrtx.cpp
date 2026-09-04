class Solution {
public:

long long int binarySearch(int n)   // binary search isiliye lagaye hai yha pr kyuki hm squareroot ko search kr rhe  hai
{
  int s = 0;
  int e = n;

  long long int ans = -1;     // long long int isisliye use kiye hai kyuki agr sirf int rhega to square of large number int ke range se bahar chla jayega
  while(s <= e)
  {
    long long int mid = s + (e - s) / 2;
    long long int square = mid*mid;
    if(square == n)
    {
        return mid;
    }
    if(square < n)
    {
       ans = mid;    // yha pr ans ko isliye stote kra rhe hai kyuki ho skta hai is step me mid hi squareroot ho
       s = mid + 1;
    }
    else 
    {
        e = mid - 1;
    }
  }
  return ans;
}
    int mySqrt(int x) {
      return binarySearch(x);  
    }
};