#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,b,c=0;
    bool flag=true;
    cin >> n >> m;
    for(a=0; a*a<=n; a++){
        for(b=0; b*b<=m; b++){
            long long x=(a*a)+b,y=a+(b*b);
            if(x==n && y==m) c++;
        }
    }
    cout << c << endl;
    return 0;
}
