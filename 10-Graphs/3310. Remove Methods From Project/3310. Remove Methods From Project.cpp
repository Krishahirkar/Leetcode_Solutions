1class Solution {
2public:
3    vector<int> remainingMethods(int n,int k,vector<vector<int>>& invocations){
4        vector<vector<int>>g(n);
5        vector<int>vis(n);
6        for(auto &e:invocations) g[e[0]].push_back(e[1]);
7        queue<int>q;
8        q.push(k);
9        vis[k]=1;
10        while(!q.empty()){
11            int u=q.front();
12            q.pop();
13            for(int v:g[u]){
14                if(!vis[v]){
15                    vis[v]=1;
16                    q.push(v);
17                }
18            }
19        }
20        for(auto &e:invocations){
21            if(!vis[e[0]] && vis[e[1]]){
22                vector<int>ans;
23                for(int i=0;i<n;i++)ans.push_back(i);
24                return ans;
25            }
26        }
27        vector<int>ans;
28        for(int i=0;i<n;i++)if(!vis[i]) ans.push_back(i);
29        return ans;
30    }
31};