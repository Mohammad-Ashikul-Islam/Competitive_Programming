#include<bits/stdc++.h>
using namespace std;
bool fnc(long long a){
    long sum=0;
    while(a!=0){
        sum+= a%10; a/=10;
    }
    if(sum%4==0) return true;
    else return false;
}
int main()
{
    long long a;
    cin >> a;
    long long n=a,sum=0;
    while(fnc(a)!=true){
        a++;
    }
    cout << a << endl;
    return 0;
}
