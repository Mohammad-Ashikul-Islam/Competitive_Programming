#include<bits/stdtr1c++.h>
using namespace std;
int ara[100000];
int main()
{
    int n,i;
    cout << "Enter the number: \n";
    cin >> n;
    for(i=2; i<=sqrt(n); i++){
            int sum=i+i;
        while(sum <= n){ ara[sum] = 1; sum += i; }
    }
    if(ara[n]==0) cout << "Number is prime !\n";
    else cout << "Number is not prime !\n";
    return 0;
}
