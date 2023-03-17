#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll i,likes=0,dislikes=0;
        for(i=0; i<n; i++){
            ll temp;
            cin >> temp;
            if(temp>0) likes++;
            else dislikes++;
        }

        for(i=1; i<=likes; i++){
            if(i==1) cout << i;
            else cout << " "<<i;
        }
        ll var=likes;
        for(ll j=1; j<=dislikes; j++,var--) cout << " " << var-1;
        cout << endl;
        cout << 1;
        ll last=likes;
        likes--;
        bool flag=false;
        for(i=1; i<n && likes>0 && dislikes>0; i++){
            if(flag==false){
                cout << " " << 0;
                flag=true;
                dislikes--;
            }
            else{
                flag=false;
                cout << " " << 1;
                likes--;
            }
        }
        if(flag==false) var=1;
        else var=0;
        while(likes){
            var++;
            cout << " "<<var;
            likes--;
        }
        while(dislikes){
            var--;
            cout << " " << var;
            dislikes--;
        }
        cout << endl;
    }
    return 0;
}
