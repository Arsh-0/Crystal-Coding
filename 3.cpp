/*
Array #3 (Missing element of AP)
[https://www.geeksforgeeks.org/problems/missing-element-of-ap2228/1?page=2&difficulty%5B%5D=0&status%5B%5D=solved&category%5B%5D=Arrays&sortBy=submissions]
*/

// Brute Force Approach
// Calculate the sum of AP using the first and last terms, and subtract the total sum of the current array from it.
// TC : O(n)
// SC : O(1)

class Solution 
{
  public:
    int findMissing(vector<int> &arr) 
    {
        long APsum = (arr.size() + 1) / 2.0 * (arr[0] + arr[arr.size() - 1]);
        long currSum = accumulate(arr.begin(), arr.end(), 0);
        
        return APsum - currSum;
    }
};

// Optimal Approach
// Calculate common differences using first and last terms, do a binary search every time the formula of AP for mid as the nth term doesn't match the element on that index/mid, and return the lowest such findings at last.
// TC : O(log n)
// SC : O(1)

class Solution 
{
  public:
    int findMissing(vector<int> &arr) 
    {
        int d = (arr[arr.size() - 1] - arr[0]) / arr.size();
        int start = 0, end = arr.size() - 1;
        
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            int currResult = arr[0] + mid * d;
            
            if(currResult == arr[mid]) start = mid + 1;
            else end = mid - 1;
        }
        
        return arr[0] + start * d;
    }
};

