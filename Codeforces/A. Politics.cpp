#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        vector<ll> v;
        ll row,column;
        cin >> row >> column;
        ll i,j;
        char ara[row][column];
        for(i=0; i<row; i++){
            for(j=0; j<column; j++) cin >> ara[i][j];
        }
       /* if(row==1 || column==1){
            cout << 1 << endl;
            continue;
        } */
        for(i=0; i<column; i++){
            char ch;
            for(j=0; j<row; j++){
                if(j==0){
                    ch = ara[j][i];
                    continue;
                }
                else if(count(v.begin(),v.end(), j)) continue;
                if(ara[j][i]==ch) continue;
                else v.push_back(j);
            }
        }
        cout << row-v.size() << endl;
    }
    return 0;
}

