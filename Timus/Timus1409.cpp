#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,x,y;
    cin >> m >> n;
    long long sum=m+n;
    if(sum<=10){
        x =sum-m; y=sum-n;
    }
    else { x=10-m; y=10-n;}
    cout << x << " " << y <<endl;
    return 0;
}
