#include<bits/stdc++.h>
using namespace std;
#define ss(a) scanf("%lld",&a)
int fnc(vector<long long> &v,long long mid,long long c)
{
    long long cnt=1,sum=0;
    for(long long i=0; i<v.size(); i++){
        if(sum+v[i]>mid){cnt++; sum=v[i];}
        else sum+=v[i];

    }
    if(c>=cnt) return 1;
    else return 0;
}
int main()
{
    long long u,t,n,c;
    ss(t);
    for(u=1; u<=t; u++){
        ss(n);
        ss(c);
        long long x,mx=INT_MIN,sum=0;
        vector<long long> v;
        for(long long i=0; i<n; i++){
            ss(x);
            v.push_back(x);
            sum+=x;
            if(x>mx) mx=x;
        }
        long long high=sum,low=mx,mn=INT_MAX,mid;
        while(low<=high){
            mid=(high+low)/2;
            if(fnc(v,mid,c)==1){
                if(mid<mn) mn=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        printf("Case %lld: %lld\n",u,mn);
    }
    return 0;
}
