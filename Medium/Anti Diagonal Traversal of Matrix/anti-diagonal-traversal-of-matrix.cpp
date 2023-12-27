//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
        
          int n =matrix.size();
        int col=0;
        vector<int> ans(n*n);
        int index=0;
        while(col<n){
            int temp=col;
            for(int row=0;row<=col;row++){
                if(row<n && col<n)ans[index++]=(matrix[row][temp--]);
            }
            col++;
        }


        int row=1;
        while(row<n){
            int temp=row;
            for(int col=n-1;col>=row;col--){
                if(row<n && col<n)ans[index++]=(matrix[temp++][col]);
            }
            row++;
        }
        return ans;
    }


    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends