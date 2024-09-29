/*
Array #2 (Check Equal Arrays)
[https://www.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Arrays&sortBy=submissions]
*/

// Brute Force Approach
// Iterating from 0 to n while trying to keep count for the element at the same position in both the arrays, if count reaches 0 since we add and remove 1 in it equal number of times then continue else return false. 
// TC : O(n * 2n) ≈ O(2n²) ≈ O(n²)
// SC : O(1)

class Solution 
{
  public:
    bool check(vector<int>& arr1, vector<int>& arr2) 
    {
        int n = arr1.size();
        for(int i = 0; i < n; ++i)
        {
            int count = 0, currElement = arr1[i];
            
            for(int j = 0; j < n; ++j)
            {
                if(arr1[j] == currElement) count++;
            }
            
            for(int k = 0; k < n; ++k)
            {
                if(arr2[k] == currElement) count--;
            }
            
            if(count != 0) return false;
        }
        
        return true;
    }
};


// Better Approach
// Sort both the arrays and try to match every index with each other. 
// TC : O(n log n + n log n + n) ≈ O(2 * n log n) ≈ O(n log n)
// SC : O(1)

class Solution 
{
  public:
    bool check(vector<int>& arr1, vector<int>& arr2) 
    {
        
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        
        for(int i = 0; i < arr1.size(); ++i)
        {
            if(arr1[i] != arr2[i]) return false;
        }
        
        return true;
    }
};


  
// Optimal Approach
// Using two unordered_maps, keep the frequency count of both arrays and matching maps in the end.
// However can also be achieved using a single map, by adding the frequency count from the first array and then removing it based on the second, if we ever hit 0 and try to decrement more, return false.
// TC : (2n) ≈ O(n)
// SC : O(n)

class Solution 
{
  public:
    bool check(vector<int>& arr1, vector<int>& arr2) 
    {
        unordered_map <int, int> m;
        
        for(auto &i : arr1) m[i]++;
        for(auto &i : arr2)
        {
            if(m[i] == 0) return false;
            --m[i];
        }
        
        return true;
    }
};
