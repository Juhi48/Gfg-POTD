//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  long long findSub(string s){
        int n=s.length();
        vector<long long>dp(n+1);
        dp[0]=1;
        unordered_map<char, int>mpp;
        for(int i=1; i<=n; i++){
            dp[i]=2*dp[i-1];
            char ch=s[i-1];
            if(mpp.find(ch)!=mpp.end()){
                int j=mpp[ch];
                dp[i]-=dp[j-1];
            }
            mpp[ch]=i;
        }
        return dp[n];
    }
    
    string betterString(string str1, string str2) {
        // code here
        
         return (findSub(str1)>=findSub(str2))?str1:str2;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        Solution obj;
        string ans = obj.betterString(str1, str2);
        cout << ans << "\n";
    }
}

// } Driver Code Ends