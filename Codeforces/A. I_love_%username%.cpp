#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,temp,x,i,sum=0;
    cin >> a;
    for(i=0; i<a; i++){
        cin >> x;
        if(i==0){ temp=x; continue; }
        if(x>temp) sum++;
        temp = x;
    }
    cout << sum << endl;
    return 0;
}

