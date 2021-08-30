#include<bits/stdc++.h>
using namespace std;


int node, edge ;
vector <int> vg[100], vr[100] ;
vector <int> top, answer;
bool ara1[100], ara2[100] ;

void fnc1(int s) {
    ara1[s] = true ;
    for(int i=0; i<vg[s].size(); i++) {
        int v = vg[s][i] ;
        if(!ara1[v]) {
            fnc1(v) ;
        }
    }
    top.push_back(s)  ;
}

void fnc2(int s) {
    ara2[s] = true ;
    for(int i=0; i<vr[s].size(); i++) {
        int v = vr[s][i] ;
        if(!ara2[v]) {
            fnc2(v) ;
        }
    }
}

int main() {
    cin >> node >> edge ;
    for(int i=0; i<edge; i++) {
        int a, b ;
        cin >> a >> b ;
        vg[a].push_back(b) ;
        vr[b].push_back(a) ;
    }
    memset(ara1, 0, sizeof ara1) ;
    memset(ara2, 0, sizeof ara2) ;
    for(int i=1; i<=node; i++) {
        if(!ara1[i]) {
            fnc1(i) ;
        }
    }
    int no = 0 ;
    for(int i=top.size()-1; i>=0; --i) {
        if(!ara2[top[i]]) {
            fnc2(top[i]) ;
            no += 1 ;
        }
    }
    if(no > 1) cout << "No strongly connected" << endl ;
    else cout << "Strongly Connected" << endl ;
}
