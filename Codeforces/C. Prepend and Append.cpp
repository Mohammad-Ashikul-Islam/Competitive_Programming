#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        string s;
        cin >> n >> s;
        ll left=0,right=s.size()-1,l=s.size();
        while(left<right){
            if((s[left]=='0' && s[right]=='1') || (s[left]=='1' && s[right]=='0')){
                left++;
                right--;
                l=l-2;
            }
            else break;
        }
        cout << l << endl;
    }
    return 0;
}
