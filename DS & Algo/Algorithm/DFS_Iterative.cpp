#include<bits/stdc++.h>     //geeks_for_geeks
using namespace std;
#define ll long long
vector<vector<long long>> adj_list;
vector<bool> visited;
void dfs(ll current_node)
{
    stack<ll> st;
    st.push(current_node);
    cout << current_node << " ";
    visited[current_node]=true;
    while(st.empty()!=true){
        ll temp=st.top(),i;
        st.pop();
        if(visited[temp]==false){
            cout << temp << " ";
            visited[temp]=true;
        }

        for(i=0; i<adj_list[temp].size(); i++){
            if(visited[adj_list[temp][i]]==false){
                st.push(adj_list[temp][i]);
            }
        }
    }
}
int main()
{
    ll node,edges,i=0;
    cin >> node >> edges;
    for(i=0; i<node; i++) visited.push_back(false);//visited.assign(n,false) would also work instead of loop
    adj_list.assign(node, vector<long long>());
    for(i=0; i<edges; i++){
        ll a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    dfs(0);
    return 0;
}

