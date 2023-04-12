#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll l,i;
    cin >> l;
    string s,p;
    cin >> s;
    for(i=0; i<l; ){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
            p.push_back(s[i]);
            i++;
            while(i<l && (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')){
                i++;
            }
        }
        else{
            p.push_back(s[i]);
            i++;
        }
    }
    cout << p << endl;
    return 0;
}

