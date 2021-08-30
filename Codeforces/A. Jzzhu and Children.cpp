#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(long long index=start; index<limit; index++)
int main()
{
    ll n,m,z,i,r;
    cin >> n >> m;
    deque<ll> number,index;
    for(i=0; i<n; i++) { cin >> r; number.push_back(r); index.push_back(i+1); }
    while(number.size()>0){
        //if(it == number.end()) { it=number.begin(); itr=index.begin(); }
        //ll x= *it,y=*itr;
        z=index.front();
        //cout << x << endl;
        if(m>=number.front()) { number.pop_front(); index.pop_front(); }
        else{
            ll x=number.front();
            x-=m;

            number.pop_front();
            number.push_back(x);
            index.pop_front();
            index.push_back(z);
        }
    }
    cout << z << endl;
    return 0;
}
