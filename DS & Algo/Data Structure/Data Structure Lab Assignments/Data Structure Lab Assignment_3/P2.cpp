#include<bits/stdc++.h>
using namespace std;
long long recursive(long long n)
{
    if(n==0) return 0;
    else if(n==1 || n==2) return 1;
    return recursive(n-1) + recursive(n-2);
}
long long non_recursive(long long n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    long long i=2,f1=0,f2=1,sum=0;
    for(; i<=n; i++){
        sum = f1 + f2;
        f1 = f2;
        f2 = sum;
    }
    return f2;
}
void print()
{
    cout << "1.Recursive Method\n2.Non Recursive Method\n(Enter 0 To Exit)\n";
}
int main()
{
    long long n,c;
    while(1){
        print();
        cin >> c;
        if(c==0) break;
        cout << "Enter The Number: ";
        cin >> n;
        if(c==1) cout << "Fibonacci Number of "<<n << " in recursive method: "<< recursive(n) << endl;
        else if(c==2) cout <<  "Fibonacci Number of "<<n << " in non recursive method: "<< non_recursive(n) << endl;
        else cout << "Invalid Selection !\n";
        cout << endl;
    }
    return 0;
}
