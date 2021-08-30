#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i,sum,temp=5,c=0;
    cin >> n >> k;
    sum=k;
    while(sum+temp<=240){
        if(c==n) break;
        c++;
        sum += temp;
        temp += 5;
    }
    cout << c << endl;
    return 0;
}
