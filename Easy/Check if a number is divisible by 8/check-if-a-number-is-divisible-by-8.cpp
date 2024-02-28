//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int DivisibleByEight(string s){
        
        if(s.length()<3)
        {
            int num1 = stoi(s);
            if(num1%8 ==0)
            {
                return 1;
            }
            
            else{
                return -1;
            }
        }
        
        string str = "";
        
        str +=s[s.length()-3];
        str +=s[s.length()-2];
        str +=s[s.length()-1];
        
        int num2 = stoi(str);
        
        if(num2 %8 ==0)
        {
            return 1;
        }
        
        return -1;
    }
};




//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends