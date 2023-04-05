#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    string s;
    ll i,j;
    for(i=1; i<=8; i++){
    for(j=0; j<8; j++){
        char ch;
        cin >> ch;
        if(ch=='*'){
            char temp = 'a'+j;
            s.push_back(temp);
            temp = '0'+(9-i);
            s.push_back(temp);
        }
    }
    }
    cout << s << endl;
    return 0;
}
