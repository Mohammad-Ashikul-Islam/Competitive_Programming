#include <bits/stdc++.h>
using namespace std;
void oddFactors(int n)
{
    int count=0;

    for (int i = 1; i <= sqrt(n); i++)
    {
    if(n%i==0){
        if(i%2==1) count++;
        if((n/i) %2==1) count++;
        if(i== (n/i)) count--;

    }
    }

    cout<<count;
}

int main()
{
    oddFactors(5);
    return 0;
}
