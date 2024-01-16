//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int help(int m,int n,vector<int>arr){
        if(arr.size()==n)return 1;
        if(m==0)return 0;
        int ans=0;
        for(int j=m;j>=1;j--){
            arr.push_back(j);
            int temp=help(j/2,n,arr);
            if(temp==0)break;
            arr.pop_back();
            ans+=temp;
        }
        return ans;
    }
    int numberSequence(int m, int n){
        // code here
        return help(m,n,{});
    }
};


//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n;
        cin>>m>>n;
        
        Solution ob;
        cout<<ob.numberSequence(m, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends