#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<vector<ll>> adjl; //adj is adjacency list
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

void bfs(ll vertices, ll edges, root){

}

int main()
{
    ll vertices, edges;
    cin >> vertices >> edges;
    adjl.resize(vertices);
    visited.resize(vertices, false);
    input(edges);
    bfs(vertices, edges, 0);

    return 0;
}
