#include<bits/stdc++.h>
using namespace std;
bool fnc(string s,long long i){
    if(s[i]>='A' && s[i]<='Z') return true;
    else if(s[i]>='a' && s[i]<='z') return true;
    else return false;
}
bool vowel(string s,long long i)
{
    if(s[i]=='A' || s[i]=='a') return true;
    if(s[i]=='E' || s[i]=='e') return true;
    if(s[i]=='I' || s[i]=='i') return true;
    if(s[i]=='O' || s[i]=='o') return true;
    if(s[i]=='U' || s[i]=='u') return true;
    if(s[i]=='Y' || s[i]=='y') return true;
    return false;
}
int main()
{
    string s;
    getline(cin,s);
    long long i=s.size()-1;
    while(fnc(s,i)==false){
        i--;
    }
    if(vowel(s,i)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}

