#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *ara,n,i,m,e,b,x,k=0;
    cout << "Enter the size of array: \n";
    cin >> n;
    ara = new int [n+1];
    cout << "Enter the elements of aray: \nNote: You must enter array as sorted: \n";
    for(i=1; i<=n; i++) cin >> ara[i];
    cout << "Enter the elements to be searched: \n";
    cin >>x;
    b=1;
    e = n;

    while(b<=e){
        m = (b+e)/2;
        if(ara[m]==x){k=m; break;}
        else if(x>ara[m]) b=m+1;
        else e=m-1;
    }
    if(k==0) cout << "Element not found in the array !\n";
    else
        cout << "Element is in the "<<k <<"th position in the array!\n";
    return 0;
}
