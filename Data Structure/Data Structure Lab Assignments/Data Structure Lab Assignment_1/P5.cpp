#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *ara,i,n,x.temp;
    cout << "How many elements: \n";
    cin >> n;
    int *ara = new int [n+1];
    for(i=1; i<=n; i++) cin >> ara[i];
    cout << "Which element to delete: \n";
    cin >> x;
    for(i=1; i<=n; i++){
        if(ara[i]==x) break;
    }
    while(i<=n-1){
        ara[i] = ara[i+1];
        i++
    }
    cout << x << "is deleted sucessfully !\n";
    return 0;
}
