#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,y,temp;
    cin >> n;
    set <long long> s;
    cin >> x;
    while(x--){
        cin >> temp;
        s.insert(temp);
    }
    cin >> y;
    while(y--){
        cin >> temp;
        s.insert(temp);
    }
    if(s.size()==n) cout << "I become the guy.\n";
    else cout << "Oh, my keyboard!\n";
    return 0;
}




