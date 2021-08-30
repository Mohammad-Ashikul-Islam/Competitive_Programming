#include<bits/stdc++.h>
using namespace std;

long long multiply(long long x,long long ara[],long long a_s)
{
    long long i,temp,carry=0;
    for(i=0; i<a_s; i++){
        temp = (ara[i]*x)+carry;
        ara[i]=temp%10;
        carry = temp/10;
    }
    while(carry){
        ara[a_s] = carry%10;
        carry /= 10;
        a_s++;
    }
    return a_s;
}

void factorial(int n){
    long long ara[5000],a_s,x=2;
    ara[0]=1; a_s=1;
    for(; x<=n; x++){
        a_s = multiply(x,ara,a_s);
    }
    long long sum=0;
    for(int i=a_s-1; i>=0; i--) sum += ara[i];
    cout << sum << endl;
}

int main()
{
    long long x;
    while(cin >> x){
    factorial(x);
    }
    return 0;
}
