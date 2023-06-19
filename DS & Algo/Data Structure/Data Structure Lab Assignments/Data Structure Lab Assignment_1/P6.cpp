#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *ara,n,i,j;
    cout << "How many numbers?\n";
    cin >> n;
    ara = new int [n+1];
    cout << "Enter the elements: \n";
    for(i=1; i<=n; i++) cin >> ara[i];
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            if(ara[j]>ara[j+1]){
                int temp = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = temp;
            }
        }
    }
    for(i=1; i<=n; i++) cout << ara[i] << " ";
    cout << endl;
    return 0;
}

