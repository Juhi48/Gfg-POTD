//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */


class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         vector<int> v;
         int n = mat.size();
         int i=0,j=0,x=0,y=0,p=0,q=-1;
         bool f=0;
         for(int k=0;k<((2*n)-1);k++){
             if(q<n-1) q++;
             else p++;
             i=p,j=q;
             x=j,y=i;
             vector<int> vp;
             while(i!=x&&j!=y){
                  vp.push_back(mat[i][j]);
                  i++;
                  j--;
             }
             if(i<n&&j<n) vp.push_back(mat[i][j]);
             if(f){
                 for(auto l : vp) v.push_back(l);
                 f=0;
             }
             else{
                 for(int l=vp.size()-1;l>=0;l--) v.push_back(vp[l]);
                 f=1;
             }
         }
         return v;
    }
};



//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends