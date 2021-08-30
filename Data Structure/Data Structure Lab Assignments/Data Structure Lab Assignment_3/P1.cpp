#include<bits/stdc++.h>
using namespace std;
long long recursive(long long n)
{
    long long sum=1;
    if(n==0 || n==1) return 1;
    return n * recursive(n-1);
}
long long non_recursive(long long n)
{
    if(n==0 || n==1) return 1;
    long long i,sum=1;
    for(i=2; i<=n; i++) sum *= i;
    return sum;
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
        if(c==1) cout << "Factorial of "<<n << " in recursive method: "<< recursive(n) << endl;
        else if(c==2) cout <<  "Factorial of "<<n << " in non recursive method: "<< non_recursive(n) << endl;
        else cout << "Invalid Selection !\n";
        cout << endl;
    }
    return 0;
}
