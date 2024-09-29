/*
Array #7 (Move all negative elements to end)
[https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1?page=2&difficulty%255B%255D=0&category%255B%255D=Arrays&sortBy=submissions]
*/

// Approach
// Create a temporary array and store all the positive elements followed by all the negative element, traversing once for each then restore it back in original array.
// TC : O(3n) ≈ O(n)
// SC : O(n)

class Solution
{
  public:
    void segregateElements(vector<int>& arr) 
    {
        vector <int> temp;
        
        for(auto &i : arr)
        {
            if(i >= 0) temp.push_back(i);
        }
        
        for(auto &i : arr)
        {
            if(i < 0) temp.push_back(i);
        }
        
        for(int i = 0; i < arr.size(); ++i) arr[i] = temp[i];
    }
};
