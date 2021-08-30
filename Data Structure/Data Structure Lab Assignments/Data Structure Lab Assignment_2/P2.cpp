#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a[100][100],n,i,j,b[100][100],sum[100][100];
    cout << "Enter N: \n";
    cin >> n;
    cout << "Enter the elements of first matrix: ";
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++)
            cin >> a[i][j];
    }
    cout << "Enter the elements of second matrix: ";
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++)
            cin >> b[i][j];
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++)
            sum[i][j] = a[i][j]+b[i][j];
    }
    cout << "\nSum: \n\n";
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++)
            cout << sum[i][j] << " ";
            cout << endl;
    }
    return 0;
}
