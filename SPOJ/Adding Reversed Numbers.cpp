#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    cin >> t;
    string s,p;
    while(t--){
        cin >> s >> p;
        long long sum;
        reverse(s.begin(),s.end());
        reverse(p.begin(),p.end());
        sum = stoll(s,NULL,10) + stoll(p,NULL,10);
      string z = to_string(sum);
        reverse(z.begin(),z.end());
        sum = stoll(z,NULL,10);
        cout << sum << endl;
    }
    return 0;
}


