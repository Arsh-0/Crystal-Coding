/*
Array #5 (Min and Max in Array)
[https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1?page=1&difficulty%255B%255D=-1&category%255B%255D=Arrays&sortBy=submissions]
*/

// Brute Force Approach
// First find the minimum from all the elements, then find the maximum from all, traversing array each time.
// TC : O(2n)
// SC : O(1)

class Solution 
{
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) 
    {
        long long min = *min_element(arr.begin(), arr.end());
        long long max = *max_element(arr.begin(), arr.end());
        
        return {min, max};
    }
};

// Better Approach
// Check with every element for minimum and maximum in single traversal, moreover if you initialize Min and Max with first elements of array, it will decrease 1 iteration.
// TC : O(n)
// SC : O(1)

class Solution 
{
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) 
    {
        long long Min = LLONG_MAX, Max = LLONG_MIN;
        for(auto &i : arr)
        {
            Min = min(Min, i);
            Max = max(Max, i);
        }
        
        return {Min, Max};
    }
};
