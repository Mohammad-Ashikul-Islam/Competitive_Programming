#include<bits/stdc++.h>
using namespace std;
#define ll long long
void bfs(ll source,ll n,ll e,vector<vector<ll>>& adjl){
    vector<ll> visited;
    for(ll i=0; i<n; i++) visited.push_back(false);
    visited[source]=true;
    deque<ll> d;
    d.push_back(source);
    while(d.empty()!=true){
        ll x=d.front();
        cout <<" "<< d.front();
        d.pop_front();
        for(ll i=0;i<adjl[x].size(); i++){
            if(visited[adjl[x][i]]==true) continue;
            else d.push_back(adjl[x][i]),visited[adjl[x][i]]=true;
        }
    }

}
int main()
{
    ll n,e;
    cin >> n >> e;
    vector< vector<long long> > adjl;
    for(ll i=0; i<n; i++) adjl.push_back(vector<long long>());
    ll x,y;
    for(ll i=0; i<e; i++) {
        cin >> x >>y;
        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }
    ll source;
    cin >> source;
    bfs(source,n,e,adjl);
    return 0;
}
