#include<bits/stdc++.h>
using namespace std;
long long fnc(long long ara[],long long e,long long pos,long long element)
{
    long long s=0,mid,temp=-1;
    while(s<=e){
        mid=(s+e)/2;
        if(ara[mid]==element) {temp= mid; break;}
        else if(ara[mid]>element) s=mid+1;
        else e=mid-1;
    }
    if(temp==-1 || temp==i) return temp;
    return temp;
}
int main()
{
    long long n;
    while(scanf("%lld",&n)!=EOF){
        long long ara[n],d=-1,m,x,y;
        for(long long i=0; i<n; i++) scanf("%lld",&ara[i]);
        scanf("%lld",&m);
        getchar();
        for(long long i=0; i<n; i++){
            long long indx=fnc(ara,n-1,i,m-ara[i]);
            if(indx<0) continue;
            if(d<0 || (d>abs(m-ara[indx]))){
                    d=abs(m-ara[indx];  x=max(ara[indx],m-ara[indx]); y=m-x;
            }
        }
        printf("Peter should buy books whose prices are %lld and %lld\n\n",x,y);
    }
    return 0;
}
