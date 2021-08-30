#include<iostream>
using namespace std;
long long fnc(long long n){
    long long count=0;
    while(n!=1){
        count++;
        if(n%2==1) n = (n*3)+1;
        else n /= 2;
        }
    return count+1;
    }
int main()
{
    long long i,j,x,y,max,temp;
    while(scanf("%lld%lld",&i,&j) != EOF){
        if(i<j){x=i;y=j; }
        else { x=j; y=i; }
        max = -1;
        for(; x<=y; x++){
            temp = fnc(x);
            if(temp>max) max = temp;
            }
        cout << i << " "<<j<<" "<<max<<endl;
        }
    return 0;
}
