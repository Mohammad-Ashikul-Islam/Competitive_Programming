#include<bits/stdc++.h>
using namespace std;

long long fnc(long long ind,long long num,long long p)
{
    ind =ind%p;
    long long r= ind*num;
    return r%p;
}
int main()
{
    long p=131071;
    char w;
    while(1){
        char ch;
        string s;
        while(1){
            if(scanf("%c",&ch)==EOF) goto w;
            if(ch=='#') break;
            if(ch=='1'|| ch=='0')s.push_back(ch);
        }
        long long i=s.size()-1,ind=1,res=0;
        for(; i>=0; i--){
            long long num=(s[i]-'0'),temp;
            if(num != 0){
            res += fnc(ind,num,p);
            res = res%p;
            }
            ind = (ind*2);
            if(ind>=p) ind %=p;
        }
        if(res%p==0) printf("YES\n");
        else printf("NO\n");
    }
    w: ;
    return 0;
}
