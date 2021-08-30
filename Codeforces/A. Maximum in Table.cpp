#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j;
    cin >> n;
    long long ara[n][n];
    for(i=0; i<n; i++){
        ara[i][0]=1;
        ara[0][i]=1;
    }
    for(i=1; i<n; i++){
        for(j=1; j<n; j++){
            ara[i][j]=ara[i-1][j]+ara[i][j-1];
        }
    }
    long long mx=INT_MIN;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
               // cout << ara[i][j] << " ";
            mx = max(mx,ara[i][j]);
        }
       // cout << endl;
    }
    cout << mx << endl;
    return 0;
}
