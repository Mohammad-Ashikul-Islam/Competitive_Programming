#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,x,y,sum=0,ara[6][6];
    for(i=0; i<5; i++){
        for(j=0; j<5; j++) {
                cin >> ara[i][j];
        if(ara[i][j]==1) { x=i+1; y=j+1; }
        }
    }
    x = abs(x-3); y = abs(y-3);
    sum = x+y;
    cout << sum << endl;
    return 0;
}
