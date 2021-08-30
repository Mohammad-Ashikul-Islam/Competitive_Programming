#include<bits/stdc++.h>
using namespace std;
int main()
{
    long a,o,l;
    cin >> a;
    cout << (a/100)+((a%100)/20)+(((a%100)%20)/10)+((((a%100)%20)%10)/5)+(((((a%100)%20)%10)%5)/1);
    cout << endl;
    return 0;
}
