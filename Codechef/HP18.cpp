#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while(t--){
        long long n,bob,alaice,cb=0,ca=0,x,k;
        cin >> n >> bob >> alaice;
        while(n--){
            cin >> x;
            if(x%bob==0) cb++;
            else if(x%alaice==0) ca++;
        }
        if(bob==alaice){
            if(cb%2==0) cout << "ALICE\n";
            else cout << "BOB\n";
        }
        else if(cb==ca) cout << "ALICE\n";
        else if(cb>ca) cout << "BOB\n";
        else cout << "ALICE\n";
    }
    return 0;
}
