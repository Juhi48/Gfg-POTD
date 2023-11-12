//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        
        string temp = str1;
        int n = str1.length();
   
        temp = temp[n-1] + temp;
        temp = temp[n-1] + temp;
        temp.erase(n, n+2);
        if(temp == str2) return true;
        
        temp = str1;
        
        // rotate by one position
        temp = temp + temp[0];
        temp = temp + temp[1];
        temp.erase(0,2);
        if(temp == str2) return true;
        
        return false;
    
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends