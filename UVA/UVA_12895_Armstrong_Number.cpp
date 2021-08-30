#include<bits/stdc++.h>
using namespace std;
long long power(long x,long y)
{
    long long i,total=1;
    if(x==0) return 0;
    else if(y==0) return 1;
    for(i=1; i<=y; i++){
        total *= x;
    }
    return total;
}
int main()
{
    long long t,i,n;
    char s[100];
    cin >> t;
    while(t--){
        cin >> s;
        long long sum = 0,l=strlen(s),d;
        stringstream(s) >> n;
        for(i=0; i<strlen(s); i++){
                d = s[i]-48;
            sum += power(d,l);
        }
        if(sum==n) cout << "Armstrong\n";
        else cout << "Not Armstrong\n";
            }
    return 0;
}
