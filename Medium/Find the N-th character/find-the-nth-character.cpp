//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) 
    {
        //code here
        
            int len = s.length();
    int m = len * pow(2, r);

    int x = m / len;

    string s1 = "";
    int i = 0;

    for (i = 0; i < s.length(); i++) {
        if ((i + 1) * x > n) {
            if (s[i] == '1')
                s1 = "1";
            else
                s1 = "0";

            for (int j = 0; j < r; j++) {
                string ans = "";
                for (int k = 0; k < s1.length(); k++) {
                    if (s1[k] == '1') {
                        ans += "10";
                    } else if (s1[k] == '0') {
                        ans += "01";
                    }
                }
                s1 = ans;
            }
            break;
        }
    }

    n = n - (i * x);

    return s1[n];
}
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends