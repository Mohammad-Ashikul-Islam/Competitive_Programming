#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,sum,temp,new_packet;
    while(cin >> n >>k){
            sum = n;
        while(n >= k){
                new_packet = n/k;
            sum += new_packet;
            n = new_packet+n %k;
        }
        cout << sum << endl;
    }
    return 0;
}
