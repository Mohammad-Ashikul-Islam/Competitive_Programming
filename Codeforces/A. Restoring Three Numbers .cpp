#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ara[4];
    cin >> ara[0] >> ara[1] >> ara[2] >> ara[3];
    sort(ara,ara+4);
    cout << ara[3]-ara[0] << " "<<ara[3]-ara[1] << " "<<ara[3]-ara[2];
    cout << endl;
    return 0;
}
