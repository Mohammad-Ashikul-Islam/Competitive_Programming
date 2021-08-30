#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,m,n,x,p;
    cin >> m >> n >> p;
    int a[m][n],b[n][p],c[m][p];
    for(i=0; i<m; i++){
        for(j=0; j<n; j++) cin >> a[i][j];
    }
     for(i=0; i<n; i++){
        for(j=0; j<p; j++) cin >> b[i][j];
    }
    for(i=0; i<m; i++){
        for(j=0; j<p;j++){
            c[i][j]=0;
            for(k=0; k<n; k++) c[i][j] += a[i][k]*b[k][j];
        }
    }
    for(i=0; i<m;i++){
        for(j=0; j<p; j++) cout << c[i][j] << " ";
        cout << endl;
    }
    return 0;
}
