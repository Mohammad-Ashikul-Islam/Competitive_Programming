#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<vector<ll>> adjl; //adj is adjacency list
vector<bool> visited;
ll disjoined=0;

void input(ll edges)
{
    ll i;
    for(i=0; i<edges; i++){
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }
}

void bfs(ll root){
    queue<ll> q;
    q.push(root);
    visited[root] = true;
    while(!q.empty()){
        ll temp = q.front();
        q.pop();
        for(ll i=0; i<adjl[temp].size(); i++){
            if(visited[adjl[temp][i]]==false){
                q.push(adjl[temp][i]);
                visited[adjl[temp][i]] = true;
            }
        }
    }
}

int main()
{
    ll vertices, edges;
    cin >> vertices >> edges;
    adjl.resize(vertices);
    visited.resize(vertices, false);
    input(edges);
    for(ll i=0; i<vertices; i++){
        if(!visited[i]){
            disjoined++;
            bfs(i);
        }
    }
    //n number of nodes can have maximum n-1 vertices (if whole graph is connected)
    //if not connected, then calculate disjoined number of subgraph and adjust those
    //if x disjoint graph available, we need x-1 less edges
    cout << (edges - (vertices-1))+(disjoined-1) << endl;

    return 0;
}
