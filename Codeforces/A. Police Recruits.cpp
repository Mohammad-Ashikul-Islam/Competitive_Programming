#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,x,res=0,sum=0,sum3=0;
    scanf("%lld",&t);
    vector <long long> v;
    for(i=0; i<t; i++){ scanf("%lld",&x); v.push_back(x);}
    for(i=0; i<t; i++){
        if(v[i]<0 && res>0) res--;
        else if(v[i]<0 && res==0) ++sum;
        else res += v[i];
    }
    printf("%lld",sum);
    return 0;
}
