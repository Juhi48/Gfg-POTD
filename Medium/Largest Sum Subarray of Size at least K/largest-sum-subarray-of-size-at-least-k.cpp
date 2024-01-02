//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) {
 
        // Initialize an array to store the maximum sum up to index i
        int maxSum[n];
        maxSum[0] = a[0];

        // Initialize a variable to store the current maximum subarray sum
        int curr_max = a[0];
        
        // Iterate over the array to calculate the maximum sum up to each index
        for (int i = 1; i < n; i++)
        {
            curr_max = max(a[i], curr_max + a[i]);
            maxSum[i] = curr_max;
        }
 
        // Initialize variables for the initial sum and result
        int sum = 0;
        int result = sum;

        // Calculate the sum of the first k elements
        for (int i = 0; i < k; i++)
            sum += a[i];
 
        // Update the result with the initial sum
        result = sum;

        // Iterate over the array starting from index k
        for (int i = k; i < n; i++)
        {
            // Update the sum by adding the current element and subtracting the (i-k)th element
            sum = sum + a[i] - a[i - k];

            // Update the result with the maximum of current result and the updated sum
            result = max(result, sum);

            // Update the result with the maximum of current result and the sum plus maxSum[i-k]
            result = max(result, sum + maxSum[i - k]);
        }

        // Return the final result
        return result;
    }
};




//{ Driver Code Starts.

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends