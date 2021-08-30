#include<bits/stdc++.h>
using namespace std;
int ara[1501];
void fnc(int n)
{
    ara[0]=1; ara[1]=1;
    int sum = 0,i;
    for(i=2; i<=sqrt(n); i++){
            if(ara[i]==1) continue;
            sum = i+i;
            while(sum <= n){
                    ara[sum] = 1;
                    sum += i;
            }
    }
}
int main()
{
    fnc(1500);
    long long t;
    string s;
    cin >> t;
    while(t--){
        long long n,i,sum=0,temp=0;
        cin >> s >> n;
        for(i=0; i<s.size(); i++){
            sum = s[i]+n;
            sum = (int) sum;
            if(ara[sum]==0){
                    temp =1;
                    break;
            }
        }
        if(temp==1) cout << "YES\n";
        else cout << "NO\n";

    }
    return 0;
}
