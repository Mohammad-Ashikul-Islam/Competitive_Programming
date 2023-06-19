#include<bits/stdc++.h>
using namespace std;
string s;
long long n;
void swp(long long x,long long y)
{
    char temp=s[x]; s[x]=s[y]; s[y]=temp;
}
void permute(long long l,long long r)
{
    if(r==l){
        cout << s << endl; return;
    }
    for(long long i=l; i<=r; i++){
        swp(i,l);
        permute(l+1,r);
        swp(i,l);
    }
}
int main()
{
    cout << "Enter string size and string: ";
    cin >> n >> s;
    permute(0,n-1);
    return 0;}
