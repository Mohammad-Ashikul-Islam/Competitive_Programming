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

void dfs(ll root){
    stack<ll> s;
    s.push(root);
    visited[root]=true;
    while(!s.empty()){
        ll temp = s.top();
        s.pop();
        cout << temp << " ";
        for(ll i=0; i<adjl[temp].size(); i++){
            if(visited[adjl[temp][i]] == false){
                s.push(adjl[temp][i]);
                visited[adjl[temp][i]]=true;
            }
        }
    }
    cout << endl;
}

int main()
{
    ll vertices,edges;
    cin >> vertices >> edges;
    adjl.resize(vertices);
    visited.resize(vertices, false);
    input(edges);
    dfs(0);
    return 0;
}
