//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int atoi(string s) {
        //Your code here
        
        int ans = 0;
        int flag = 1;
        
        for(int i=0; i<s.size(); i++)
        {
            if(i == 0 && s[i] == '-')
            {
                flag = -1;
                continue;
            }
            
            if(s[i] >= 48 && s[i] <= 57)
            {
                int d = s[i] - '0';
                
                ans = (ans * 10) + d;
            }
            
            else
                return -1;
        }
        
        return ans * flag;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends