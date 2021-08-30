#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j;
    cin >> n;
    char s[n][n];
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            cin>>s[i][j];
    }
    bool flag=0;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
                    long long c=0;
                    if(j+1<n && s[i][j+1]=='o') c++;
                    if(j-1>=0 && s[i][j-1]=='o') c++;
                    if(i+1<n && s[i+1][j]=='o') c++;
                    if(i-1>=0 && s[i-1][j]=='o') c++;
                    if(c%2==1){cout << "NO\n"; return 0;}
        }
    }
    cout << "YES\n";
    return 0;
}

