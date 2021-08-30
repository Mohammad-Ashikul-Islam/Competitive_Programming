#include<bits/stdc++.h>
using namespace std;
void fnc(string &x)
{
int i=0;
    while(x[i]=='0'){
        x.erase(x.begin());
    }
}
void sum(string &s,string &p,string &temp)
{
    long long sum=0,i,carry=0,x,y,sl,pl,count=0;
    sl=s.size();    pl=p.size();
    reverse(s.begin(),s.end()); reverse(p.begin(),p.end());
    for(i=0; i<max(sl,pl); i++){
            count++;
        x=0;y=0;
        if(i<sl) x = s[i]-48;
        if(i<pl) y = p[i]-48;
        sum = x+y+carry;
        temp.push_back(sum%10+'0');
        carry=sum/10;
    }
    if(carry) temp.push_back(carry+'0');
}
int main()
{
   long long t;
    cin >> t;
    string s,p;
    while(t--){
        cin >> s >> p;
        reverse(s.begin(),s.end());
        reverse(p.begin(),p.end());
        fnc(s); fnc(p);
        string z;
        sum(s,p,z);
        int k=0;
        for(int i=0; i<z.size(); i++){
            while(k==0 && z[i]=='0'){
                i++; continue;
            }
            k=1;
            cout << z[i];
        }
        cout << endl;
    }
    return 0;
}


