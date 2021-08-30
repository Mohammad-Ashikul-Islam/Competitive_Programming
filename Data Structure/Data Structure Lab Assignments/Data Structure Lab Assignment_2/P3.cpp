#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[100][100],i,j,sum,n;
    cout << "Enter N: \n";
    cin >> n;
    cout << "Enter the elements: ";
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++)
            cin >> ara[i][j];
    }
    for(i=1; i<=n; i++){
            sum = 0;
        for(j=1; j<=n; j++){
         sum += ara[i][j];
        }
    cout << "Sum of colum " << i << " is: "<<sum << endl;
    }
    for(i=1; i<=n; i++){
            sum = 0;
        for(j=1; j<=n; j++){
         sum += ara[j][i];
        }
    cout << "Sum of row " << i << " is: "<<sum << endl;
    }
    return 0;
}
