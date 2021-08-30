#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long unsigned n;
    while(cin>>n){
            if(n==0) break;
            long long ara[1000],i=0,count=0,temp;
            while(n!=0){
                ara[i] = n%2;
                if(ara[i]) count++;
                i++;
                n /= 2;
            }
            temp = i-1;
        cout << "The parity of ";

        for(; temp>=0; temp--) cout << ara[temp];
        cout << " is " << count << " (mod 2).\n";
    }
}
