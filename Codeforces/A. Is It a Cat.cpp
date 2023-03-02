#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll l;
        cin>>l;
        string p,q;
        cin >> p;
        char ch=tolower(p[0]);
        q.push_back(ch);
        ll i=0;
        while(i<l){
            if(ch==tolower(p[i])){
                i++;
                continue;
            }
            ch=tolower(p[i]);
            q.push_back(ch);
            i++;
        }
        if(q=="meow") cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
