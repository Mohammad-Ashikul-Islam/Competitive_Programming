#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i=1,j,x,res=1,sum=0,sum3=0;
    scanf("%lld",&t);
    while(res<=t){
        sum++;
        i++;
        res += (i*(i+1))/2;
    }
    cout << sum << endl;
    return 0;
}

