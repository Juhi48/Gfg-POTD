//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int countBits(int num)
    {
        int cnt = 0;
        for(int i = 0; i<32; i++)
        {
            if(num&(1<<i)) cnt++;
        }
        return cnt;
    }
int is_bleak(int n)
{
    // Code here.
    for(int i = n-1; i>= max(1, n-32); i--)
    {
        if(n == i + countBits(i)) return 0;
    }
    return 1;
}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends