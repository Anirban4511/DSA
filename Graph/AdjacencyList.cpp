#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    int u,v;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        
    }

    //printing the total adjacency list for better understanding
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<adj[i].size();j++)
        {
            cout<<adj[i][j];
        }
        cout<<endl;
    }
   

}