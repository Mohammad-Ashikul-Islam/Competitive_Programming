#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<vector<ll>> adjl;
vector<bool> visited;

void input(ll edges)
{
    ll i;
    for(i=0; i<edges; i++){
        ll x, y;
        cin >> x >> y;
        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }
}

void dfs(ll node){
    visited[node]=true;
    cout << node << " ";
    for(ll i=0; i<adjl[node].size(); i++){
        if(!visited[adjl[node][i] ]) dfs(adjl[node][i]);
    }
}

int main()
{
    ll vertices,edges;
    cin >> vertices >> edges;
    adjl.resize(vertices);
    visited.resize(vertices, false);
    input(edges);
    dfs(0);
    cout << endl;
    return 0;
}
