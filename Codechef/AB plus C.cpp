#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin>>t;
    while(t--){
        long long x;
        cin>>x;
        if(x<=1000000){
            if(x==1){
                cout<<-1<<endl;
            }
            else{
                cout<<x-1<<" "<<1<<" "<<1<<endl;
            }
        }
        else{
            long long r = x%1000000;
            long long z = x-r;
            long long k = z/1000000;
            if(r==0){
                cout<<1000000<<" "<<k-1<<" "<<1000000<<endl;
            }
            else{
                cout<<1000000<<" "<<k<<" "<<r<<endl;
            }
        }
    }
    return 0;
}
