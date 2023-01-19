#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll total_problem=12, f, total_time=300, solved=0, time_consumed=0;
    cin >> f;
    time_consumed = 60;
    solved = f;
    while(solved<12){
        solved++;
        time_consumed += 45;
    }
    if(time_consumed <= total_time) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
