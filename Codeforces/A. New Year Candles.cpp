#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,temp,x,sum=0;
    cin >> a >> b;
    sum += a;
    temp = a;
    while(temp>=b){
        x = temp/b;
        sum += x;
        temp = temp%b + x;

    }
    cout << sum << endl;
    return 0;
}
