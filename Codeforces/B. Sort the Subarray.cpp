#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll l;
        cin >> l;
        ll a[l+1],b[l+1],i;
        for(i=1; i<=l; i++) cin >> a[i];
        for(i=1; i<=l; i++) cin >> b[i];
        ll left=-1,right=-1;
        for(i=1; i<=l; i++){
            if(a[i] != b[i]){
                left = i;
                break;
            }
        }
        for(i=l; i>=1; i--){
            if(a[i] != b[i]){
                right = i;
                break;
            }
        }
        for(i=left-1; i>=1; i--){
            if(b[i] <= b[i+1]) left--;
            else break;
        }
        for(i=right+1; i<=l; i++){
            if(b[i]>=b[i-1]) right++;
            else break;
        }
        cout << left << " " << right << endl;
    }
    return 0;
}

