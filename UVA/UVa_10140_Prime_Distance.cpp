#include<bits/stdc++.h>
using namespace std;
#define mx 46341
vector<int> primes;
void fnc(){
    bool isp[mx+10];
    int i,j;
    for(i=2; i<=mx; i++) isp[i]=true;
    for(i=3; i*i<=mx; i+=2){
        if(isp[i]){
            for(j=i*i; j<=mx; j+=i) isp[j]=false;
        }
    }
    primes.push_back(2);
    for(i=3; i<=mx; i+=2) if(isp[i]) primes.push_back(i);
}
void ss(vector<int>& v,int l,int r)
{
    bool b[r-l+1];
    for(int i=0; i<r-l+1; i++) b[i]=true;
    if(l==1) b[0]=false;
    for(long long i=0; ((i<primes.size())&&(primes[i]*primes[i]<=r)); i++){
        long long cp = primes[i];
        long long s = (l/cp)*cp;
        if(s<l) s+=cp;
        for(long long j=s; j<=r; j+=cp) b[j-l]=false;
        if(s==cp) b[s-l]=true;
    }
    for(long long i=0; i<r-l+1; i++)
            if(b[i]) v.push_back(i+l);
}
void print(vector<int> v)
{
    if(v.size()<2) printf("There are no adjacent primes.\n");
    else{
        int largest=v[1]-v[0],smallest=v[1]-v[0],temp;
        pair<int,int> largepairs,smallpairs;
        smallpairs=make_pair(v[0],v[1]);
        largepairs=make_pair(v[0],v[1]);
        for(int i=2; i<v.size(); i++){
            temp=v[i]-v[i-1];
            if(temp<smallest){smallest=temp; smallpairs=make_pair(v[i-1],v[i]);}
            if(temp>largest){largest=temp; largepairs=make_pair(v[i-1],v[i]);}
        }
printf("%d,%d are closest, %d,%d are most distant.\n",smallpairs.first,smallpairs.second,largepairs.first,largepairs.second);

    }
}
int main()
{
    fnc();
    int l,u;
    while(scanf("%d %d",&l,&u)!=EOF){
        vector<int> v;
        ss(v,l,u);
        print(v);
    }
    return 0;
}
