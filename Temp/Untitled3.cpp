#include<bits/stdc++.h>     //geeks_for_geeks
using namespace std;
#define ll long long
vector<vector<long long>> adj_list;
vector<bool> visited;
void dfs(ll s)
{
    stack<ll> st;
    st.push(s);
    visited[s]=true;
    while(st.empty()==false){
            ll x=st.top();
            st.pop();
            cout << x << " ";
        for(ll i=0; i<adj_list[x].size(); i++){
            if(visited[adj_list[x][i]]==false){
                st.push(adj_list[x][i]);
                visited[adj_list[x][i]]=true;
            }
        }
    }

}
int main()
{
    ll node,edges,i=0;
    cin >> node >> edges;
    for(i=0; i<=node; i++) visited.push_back(false);//visited.assign(n,false) would also work instead of loop
    for(i=0; i<=node; i++) adj_list.push_back(vector<long long>());//also for adj_list.assign(n, vector<int>()) too
    for(i=0; i<edges; i++){
        ll a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    ll source;
    cin >> source;
    dfs(source);
    return 0;
}
