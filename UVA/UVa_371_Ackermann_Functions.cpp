#include<bits/stdc++.h>
using namespace std;
long long fnc(long long n){
    long long count=0;
    if(n==1) return 3;
    while(n!=1){
        count++;
        if(n%2==1) n = (n*3)+1;
        else n /= 2;
        }
    return count;
}
int main()
{
    long long i,j,x,y,maxx,ln,temp;
    while(cin >> i >> j){
            if(i==0 && j==0) break;
        if(i<j){x=i; y=j; }
        else { x=j; y=i; }
        i=x; j=y;
        maxx = -1;
        for(; x<=y; x++){
            temp = fnc(x);
            if(temp>maxx){ maxx = temp; ln=x; }
            }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",i,j,ln,maxx);
        }
    return 0;
}
