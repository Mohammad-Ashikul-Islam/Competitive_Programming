#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,ara[7+1],c=0;
    cin >> n;
    for(i=1; i<=7; i++){
        cin >> ara[i];
    }
    i=1;
    while(n){
        n = n-ara[i];
        if(n<=0) break;
        i++;
        if(i==8) i=1;
    }
    cout << i << endl;
    return 0;
}
