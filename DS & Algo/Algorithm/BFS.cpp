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

void bfs(ll root){
    queue<ll> q;
    q.push(root);
    visited[root] = true;
    while(!q.empty()){
        ll temp = q.front();
        q.pop();
        cout << temp << " ";
        for(ll i=0; i<adjl[temp].size(); i++){
            if(visited[adjl[temp][i]]==false){
                q.push(adjl[temp][i]);
                visited[adjl[temp][i]] = true;
            }
        }
    }
    cout << endl;
}

int main()
{
    ll vertices, edges;
    cin >> vertices >> edges;
    adjl.resize(vertices);
    visited.resize(vertices, false);
    input(edges);
    bfs(0);

    return 0;
}
