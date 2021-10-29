#include<bits/stdc++.h>
using namespace std;

 
class Solution {
public:
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	    queue<int>q;
	    vector<int>res;
	    vector<bool>visited(V);
	    vector<int>::iterator itr;
	    q.push(0);
	    visited[0]=1;
	    while(!q.empty()){
	        int temp = q.front();
	        q.pop();
	        res.push_back(temp);
	        
	        for(itr=adj[temp].begin();itr!=adj[temp].end();itr++){
	            if(visited[*itr]==0){
	                q.push(*itr);
	                visited[*itr]=1;
	            }
	        }
	        
	    }
	    return res;
	}
};


int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    // 		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.bfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  
