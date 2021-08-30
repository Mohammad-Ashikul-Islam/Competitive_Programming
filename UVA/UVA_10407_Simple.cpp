#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1){
            long long x,gcd,k=0;
            vector <long long> v;
        while(cin>>x){
            if(x==0) break;
            if(v.size()==0){    v.push_back(x); gcd=0;}
            else{
                v.push_back(x);
                long long temp;
                temp = abs(v[k]-v[k-1]);
                gcd = __gcd(temp,gcd);
            }
        k++;
        }
        if(v.size()==0) break;
        cout << gcd << endl;
    }
    return 0;
}
