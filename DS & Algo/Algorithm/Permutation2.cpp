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
        swp(i,l);//fix a,then change b with b and c with c,then got a permutation.now a is
        permute(l+1,r);//still fixed,change b with c and we got another.now return to a,
        swp(i,l);//change a with b and fix b for two terms,then change a with a and change c
 //with c,we got another permutation.now b still fixed,change a with c and we got 4th permutation.
 //the return to b,make it abc,now change c with a and go for similar process (:
    }
}
int main()
{
    cout << "Enter string size and string: ";
    cin >> n >> s;
    permute(0,n-1);
    return 0;}
