#include<bits/stdc++.h>
using namespace std;
int v[101];

void fnc()
{
    v[0]=1; v[1]=1;
    for(int i=2; i<=10; i+=2){
            if(v[i]==0)
        for(int j=i+i; j<=100; j+=i) v[j]=1;
    if(i==2) i--;
    }
}
bool xyz(int n,int m)
{
    int temp=0;
    for(int i=n+1; i<=100; i++){
        if(v[i]==0){ temp=i; break;}
    }
    if(m==temp) return true;
    else return false;
}
int main()
{
    fnc();
    int m,n;
    cin >> n >> m;
    if(xyz(n,m)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
