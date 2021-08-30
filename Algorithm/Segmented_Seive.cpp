#include<bits/stdc++.h>
using namespace std;
#define mx 32000
vector <int> prime;
void seive(){
    bool isp[mx]; //is_prime or not
    for(int i=0; i<=mx; i++) isp[i]=true;
    isp[0]=0; isp[1]=0;
    for(int i=3; i*i<=mx; i+=2){
        if(isp[i]){
            for(int j=i+i; j<=mx; j+=i) isp[j]=false;
        }
    }
    prime.push_back(2);
    for(int i=3; i<=mx; i+=2)
        if(isp[i]) prime.push_back(i);
}
void segment_seieve(long long l,long long r){
    bool b[r-l+1];
    for(int i=0;i<r-l+1; i++) b[i]=true;
    if(l==1) b[0]=false;//special case while we print (1-10)
    for(long long i=0; prime[i]*prime[i]<=r; i++){
        long long cp = prime[i]; //cp=Current_Prime
        long long s = (l/cp)*cp;//sutro type obosthan detecting technique
        if(s<l) s+=cp;
        for(long long j=s; j<=r; j+=cp) b[j-l]=false;
        if(s==cp) b[s-l]=true;//sometime l/cp comes 0 and makes the prime to non-prime
    }
    for(long long i=0; i<r-l+1; i++)
            if(b[i]) cout << i+l << endl;
}
int main()
{
    seive();
    long long t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        segment_seieve(a,b);
        cout << endl;
    }
    return 0;
}
