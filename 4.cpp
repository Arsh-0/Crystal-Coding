/*
Array #4 (Rotate Array by One)
[https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1?page=1&difficulty%255B%255D=-1&category%255B%255D=Arrays&sortBy=submissions]
*/

// Brute Force Approach
// Save the last element in a variable, shift all the elements to the index to their right, put the saved value at 0th index in the end.
// TC : O(n)
// SC : O(1)

class Solution 
{
  public:
    void rotate(vector<int> &arr) 
    {
        int temp = arr[arr.size() - 1];
        for(int i = arr.size() - 1; i > 0; --i) arr[i] = arr[i - 1];
        arr[0] = temp;
    }
};

// A more readable version for the same will be to simply swap the last element till it reaches the first index.

class Solution
{
  public:
    void rotate(vector<int> &arr) 
    {
        for(int i = arr.size() - 1; i > 0; --i) swap(arr[i], arr[i - 1]);
    }
};
