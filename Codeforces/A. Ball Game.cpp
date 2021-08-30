#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long i,temp=1,current_index=1;
    for(i=1; i<=n-1; i++){
        current_index+=temp;
        if(current_index>n) current_index=current_index-n;
        if(i!=1)
        cout <<" " <<current_index;
        else cout << current_index;
        temp++;
    }
    cout << endl;
    return 0;
}
