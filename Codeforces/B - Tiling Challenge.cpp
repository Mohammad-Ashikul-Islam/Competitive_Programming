#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    char ara[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) {cin>>ara[i][j];
        if(ara[i][j]=='.') c++;
        }
    }
    if(c%5!=0) {cout << "NO\n"; return 0;}
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(ara[i][j]=='.' && (i+1<n && i+2<n && j+1<n && j-1>=0) && ara[i+1][j]=='.' && ara[i+1][j+1]=='.' && ara[i+1][j-1]=='.' && ara[i+2][j]=='.'){
            c-=5;
 ara[i][j]='#'; ara[i+1][j]='#'; ara[i+1][j+1]='#'; ara[i+1][j-1]='#'; ara[i+2][j]='#';

            }

        }
    }
    if(c==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
