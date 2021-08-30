#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    cin >> t;
    string s,p;
    while(t--){
        cin >> s >> p;
        reverse(s.begin(),s.end());
        reverse(p.begin(),p.end());
        double sum = stoll(s,NULL,10) + stoll(p,NULL,10);
      string z = to_string(sum);
        reverse(z.begin(),z.end());

        cout << z << endl;
    }
    return 0;
}


