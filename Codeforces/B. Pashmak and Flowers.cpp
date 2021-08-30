#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(long long index=start; index<limit; index++)
int main()
{
    ll n,i,x;
    cin >> n;
    deque<ll> mx,mn;
    mx.push_back(INT_MIN);
    mn.push_back(INT_MAX);
    loop(i,0,n){
        cin >> x;
        //if(i==0){ mx.push_back(x),mn.push_back(x); continue;}
        if(x>mx.back()) { mx.clear(); mx.push_back(x); }
        else if(x==mx.back()) mx.push_back(x);
        if(x<mn.back()) { mn.clear(); mn.push_back(x); }
        else if(x==mn.back()) mn.push_back(x);
        }
       // for(auto it=mn.begin(); it!=mn.end(); it++) cout << *it << " ";
        //cout << endl <<mx.size() << " " << mn.size() << endl;
        if(mx.size()==mn.size() && mn.size()==n) cout << "0 " << n*(n-1)/2 << endl;
        else cout << mx.front()-mn.front() << " " << (ll)mx.size()* (ll)mn.size() <<endl;

        //if(mx.front()-mn.front()==0) cout << 0 << " " << (2*mx.size()*(2*mx.size()+1))/2;

    return 0;
}
