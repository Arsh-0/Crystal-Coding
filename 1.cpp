/*
Array #1 (Array Search)
[https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Arrays&sortBy=submissions]
*/

// Simple traversal and matching worked.
// TC : O(n) 
// SC : O(1)

class Solution {
  public:
    int search(vector<int>& arr, int x) {
        for(int i = 0; i < arr.size(); ++i)
        {
            if(arr[i] == x) return i; 
        }
        
        return -1;
    }
};
