#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=1,j,c=0,mx,mn;
    cin >> n;
    int ara[n];
    for(i=0; i<n; i++) cin >> ara[i];
    mn=0;
    for(i=0; i<n; i++){
        if(ara[i]<=ara[mn]) mn=i;
    }
    mn++;
    mx=0;
    for(i=1; i<n; i++){
        if(ara[i]>ara[mx]) mx=i;
    }
    mx++;
    c = (mx-1)+(n-mn);
    if(mn<mx) c--;
    cout << c << endl;
    return 0;
}
