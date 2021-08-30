#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string p="X++",q="++X",r="X--",u="--X";
    long long t,x=0;
    cin >> t;
    while(t--){
        cin >> s;
        if(s==p || s==q) x++;
        else if(s==r || s==u) x--;
    }
    cout << x << endl;
    return 0;
}

