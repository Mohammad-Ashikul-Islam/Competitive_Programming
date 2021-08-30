#include<bits/stdc++.h>     //geeks_for_geeks
using namespace std;
#define ll long long
vector<vector<long long>> adj_list;
vector<bool> visited;
void bfs(ll i)
{
    if(visited[i]==true) return;
    queue<ll> q;
    q.push(i);
    visited[i]=true;
    while(q.empty()!=true){
        ll x=q.front();
        q.pop();
        cout << x << " ";
        for(ll j=0; j<adj_list[x].size(); j++){
            if(visited[adj_list[x][j]]==false) {
                    q.push(adj_list[x][j]);
                    visited[adj_list[x][j]]=true;
            }
        }
    }
}
int main()
{
    ll node,edges,i=0;
    cin >> node >> edges;
    for(i=0; i<node; i++) visited.push_back(false);//visited.assign(n,false) would also work instead of loop
    for(i=0; i<node; i++) adj_list.push_back(vector<long long>());//also for adj_list.assign(n, vector<int>()) too
    for(i=0; i<edges; i++){
        ll a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    for(i=0; i<node; i++) bfs(i);
    return 0;
}
