#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   string s;
   vector<ll> v;
   cin >> s;
   ll i,j;
   for(i=0; i<s.size(); i++){
        if(s[i]=='+') continue;
        v.push_back(s[i]-'0');
   }
   sort(v.begin(), v.end());
   cout << v[0];
   for(i=1; i<v.size(); i++) cout << "+"<< v[i];
   cout << endl;
}

