//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++



class Solution {
  public:
    bool dfs(int node,vector<int>adj[],vector<bool>&visited,vector<bool>&rest)
    {
        visited[node] = true;
        rest[node] = true;
        for(auto it:adj[node]){
            if(!visited[it]){
                if(dfs(it,adj,visited,rest)){
                    return true;
                }
            }
            else if(rest[it]){
                return true;
            }
        }
        rest[node] = false;
        return false;
    }
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        vector<bool>visited(V,false);
        vector<bool>rest(V,false);
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,adj,visited,rest);
            }
        }
        vector<int>ans;
        for(int i=0;i<V;i++){
            if(!rest[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends