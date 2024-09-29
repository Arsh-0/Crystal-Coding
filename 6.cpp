/*
Array #6 (Binary Array Sorting)
[https://www.geeksforgeeks.org/problems/binary-array-sorting-1587115620/1?page=1&difficulty%255B%255D=-1&category%255B%255D=Arrays&sortBy=submissions]
*/

// Brute Force Approach
// As the name suggests, simply sort it.
// TC : O(n log n)
// SC : O(1)

class Solution
{
  public:
    void binSort(int A[], int N)
    {
       sort(A, A + N);
    }
};

// Better Approach
// Keep track of number of 0s in array and simply place that first followed with 1s till array is full.
// TC : O(n + n) ≈ (2n)
// SC : O(1)

class Solution
{
  public:
    void binSort(int A[], int N)
    {
       int countZeros = 0;
       for(int i = 0; i < N; ++i)
       {
           if(A[i] == 0) countZeros++;
       }
       
       int index = 0;
       while(countZeros--) A[index++] = 0;
       while(index < N) A[index++] = 1;
    }
};

// Optimal Approach
// Simply take a positional pointer set to 0 and swap elements of array with its position increasing it whenever we encounter 0.
// TC : O(n)
// SC : O(1)

class Solution
{
  public:
    void binSort(int A[], int N)
    {
       int pos = 0;
       for(int i = 0; i < N; ++i)
       {
           if(A[i] == 0) swap(A[i], A[pos++]);
       }
    }
};
