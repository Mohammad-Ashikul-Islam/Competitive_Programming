#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long r,n,i=0;
    while(cin >> r >> n){
        i++;
        if(n==0 && r==0) break;
        if(r>(n*26)+n) printf("Case %lld: impossible\n",i);
        else if(r<=n) printf("Case %lld: 0\n",i);
        else{
            r=r-n;
            if(r%n==0) printf("Case %lld: %lld\n",i,r/n);
            else printf("Case %lld: %lld\n",i,(r/n)+1);
        }
    }
    return 0;
}
