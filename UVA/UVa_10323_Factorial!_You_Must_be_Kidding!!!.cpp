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

void large_factorial(int n){
    long long ara[5000],a_s,x=2;
    ara[0]=1; a_s=1;
    for(; x<=n; x++){
        a_s = multiply(x,ara,a_s);
    }
    for(int i=a_s-1; i>=0; i--) cout << ara[i];
    cout << endl;
}

int main()
{
    long long x;
    while(cin >> x){
            if(x >= 8 && x <= 13)  large_factorial(x);
        else if(x > 13 ) cout << "Overflow!\n" ;
        else if(x<8 && x>=0) cout << "Underflow!\n";
        else if(x<0 && x%2==0) cout << "Underflow!\n";
        else cout << "Overflow!\n" ;

    }
    return 0;
}

