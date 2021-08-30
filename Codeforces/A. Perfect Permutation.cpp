#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >>n;
    if(n%2==1) cout << "-1" << endl;
    else{
        long long ara[n+2],i;
        for(i=1; i<=n; i++) ara[i]=i;
        for(i=1; i<=n-1; i+=2){
            long long temp=ara[i]; ara[i]=ara[i+1]; ara[i+1]=temp;
        }
        cout << ara[1];
        for(i=2; i<=n; i++) cout << " " << ara[i];
        cout << endl;
    }
    return 0;
}
