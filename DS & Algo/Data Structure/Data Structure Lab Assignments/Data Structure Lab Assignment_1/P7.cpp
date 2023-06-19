#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *ara,n,i,x;
    cout << "How many numbers?\n";
    cin >> n;
    ara = new int [n+1];
    cout << "Enter the elements: \n";
    for(i=1; i<=n; i++) cin >> ara[i];
    cout << "Enter the number to be searched: \n";
    cin >> x;
    for(i=1; i<=n; i++){
        if(ara[i]==x) break;
    }
    if(i>n) cout << x <<" is not found in the array !\n";
    else cout << x <<" is in the "<< i << "th position of the array !\n";
    return 0;
}
