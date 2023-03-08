#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int ara1[]={1,3,5,6}, ara2[]={2,4,7}, l1=4, l2=3;
    vector<ll> v;
    int l=0,r=0;
    while(l<l1 && r<l2){
        if(ara1[l]<ara2[r]){
            v.push_back(ara1[l]);
            l++;
        }
        else{
            v.push_back(ara2[r]);
            r++;
        }
    }
    while(l<l1){
        v.push_back(ara1[l]);
        l++;
    }
    while(r<l2){
        v.push_back(ara2[r]);
        r++;
    }
    for(ll i=0; i<v.size(); i++) cout << v[i] << endl;
    return 0;
}
