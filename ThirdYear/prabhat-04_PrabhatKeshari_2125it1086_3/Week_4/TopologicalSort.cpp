class Solution
{
	public:
	
	void topo(int i,vector<bool> &vis,stack<int> &s,vector<int> adj[] ){
	    vis[i]=true;
	    for(auto it:adj[i]){
	        if(!vis[it])
	            topo(it,vis,s,adj);
	    }
	    s.push(i);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> ans;
	    stack<int> s;
	    vector<bool> visited(V,false);
	    
	    for(int i=0;i<V;i++){
	        if(!visited[i])
	            topo(i,visited,s,adj);
	    }
	    
	    while(!s.empty()){
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	}
};