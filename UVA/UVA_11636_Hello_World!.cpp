#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,u=0;
    while(cin >> n){
        if(n<0) break;
        long long i=1,count=0;
        while(i<n){
            i *= 2;
            count++;
        }
        cout << "Case "<< ++u <<": "<< count <<endl;
    }
    return 0;
}
