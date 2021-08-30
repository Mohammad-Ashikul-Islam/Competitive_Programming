#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll t;
    cin >> t;
    while(t--){
    string s;
    cin >> s;
    ll a,b;
    a=s[0]-'a'+1;
    b=s[1]-'0';
    ll c=0;
    ll temp1,temp2;
    temp1=a+2,temp2=b+1;
    if(temp1>=1 && temp1<=8 && temp2>=1 && temp2<=8) c++;
    temp1=a+2,temp2=b-1;
    if(temp1>=1 && temp1<=8 && temp2>=1 && temp2<=8) c++;
    temp1=a-2,temp2=b+1;
    if(temp1>=1 && temp1<=8 && temp2>=1 && temp2<=8) c++;
    temp1=a-2,temp2=b-1;
    if(temp1>=1 && temp1<=8 && temp2>=1 && temp2<=8) c++;
    temp1=a+1,temp2=b+2;
    if(temp1>=1 && temp1<=8 && temp2>=1 && temp2<=8) c++;
    temp1=a-1,temp2=b+2;
    if(temp1>=1 && temp1<=8 && temp2>=1 && temp2<=8) c++;
    temp1=a+1,temp2=b-2;
    if(temp1>=1 && temp1<=8 && temp2>=1 && temp2<=8) c++;
    temp1=a-1,temp2=b-2;
    if(temp1>=1 && temp1<=8 && temp2>=1 && temp2<=8) c++;
    cout << c << endl;
    }
    return 0;
}
