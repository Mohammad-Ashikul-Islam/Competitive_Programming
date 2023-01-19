#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    vector<vector<int>> v;
    vector<bool> visited;
    int nodes, edges;
    cin >> nodes >> edges;
    if(edges==0){
        cout << nodes << endl;
        return 0;
    }
    v.resize(nodes);
    visited.resize(edges);
    int i;
    for(i=0; i<edges; i++){
        int x,y;
        cin >> x >> y;
        v[x-1].push_back(y-1);
        v[y-1].push_back(x-1);
    }
    int c=0;
    for(i=0; i<nodes; i++){
        if(visited[i]==true) continue;
        c++;
        queue<int> q;
        q.push(i);
        while(q.empty()==false){
            int temp = q.front();
            q.pop();
            for(int j=0; j<v[temp].size(); j++){
                if(visited[v[temp][j]]==false){
                    visited[v[temp][j]]=true;
                    q.push(v[temp][j]);
                }
            }
        }
    }
    cout << c << endl;
    return 0;
}
