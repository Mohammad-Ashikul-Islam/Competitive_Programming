#include<bits/stdc++.h>
using namespace std;
long long c2,c5;
long long fnc(long long k,long long temp){
    if(k%2 !=0 && k%5!=0) return ((k%10)*temp)%10;
    while(k%2==0 && k!=0){ c2++; k /= 2;}
    while(k%5==0 && k!=0){c5++; k/=5;}
    if(k==0) return temp;
    return ((k%10)*temp)%10;
}
long long handle5(long long temp,long long sum){
    temp = temp*5;
    if(temp%2!=0) return 5;
    else return temp/2;
}
int main()
{
    long long n,r;
    while(scanf("%lld %lld",&n,&r)!=EOF){
            c2=0; c5=0;
       long long k=n-r+1;
       long long temp = 1;
       for(; k<=n; k++){
        temp = fnc(k,temp);
       }
       if(c2==c5) { printf("%lld\n",temp); continue;}
       else if(c2>c5){
       long long sum=c2-c5;
       for(long long x=0; x<sum;x++){
        temp = (temp*2)%10;
       }
       printf("%lld\n",temp); continue;
       }
       else if(c2<c5){
            long long sum=c5-c2;
            temp = handle5(temp,sum);
        printf("%lld\n",temp); continue;
       }
       printf("%lld\n",temp);
    }
    return 0;
}
