#include<bits/stdc++.h>
using namespace std;
#define mx 1000000
int isp[mx+1];
void fnc()
{
    isp[0]=1; isp[1]=1;
    long long i,j;
    for(i=2; i*i<=mx; i+=2){
        if(isp[i]==0){
            for(j=i+i; j<=mx; j+=i) isp[j]=1;
        }
        if(i==2) i--;
    }
}
int main()
{
    fnc();
    long long i,x,n;
    vector <long long> ara;
    cin >> n;
    for(i=0; i<n; i++){cin >> x; ara.push_back(x);}
    for(i=0; i<n; i++){
        if(ara[i]==0 || ara[i]==1 || ara[i]==2) cout << "NO\n";
        else if(ara[i]==4) cout << "YES\n";
        else if(ara[i]%2==0) cout << "NO\n";
        else{
                long long t1=sqrt(ara[i]);
                double t2=sqrt(ara[i]);
            if((t2-t1==0) && isp[t1]==0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}
