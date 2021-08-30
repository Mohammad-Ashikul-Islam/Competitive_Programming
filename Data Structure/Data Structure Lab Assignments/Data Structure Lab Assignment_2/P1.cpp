#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100],n,i,j,b[100][100];
    cout << "Enter N: \n";
    cin >> n;
    cout << "Enter the elements: ";
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++)
            cin >> a[i][j];
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++)
            b[j][i] = a[i][j];
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++)
            cout << b[i][j] << " ";
            cout << endl;
    }
    return 0;
}
