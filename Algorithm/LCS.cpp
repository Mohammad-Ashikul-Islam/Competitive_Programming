#include<bits/stdc++.h>
using namespace std;
long long fnc(string s,long long s_size,string p,long long p_size)
{
    long long table[s_size+1][p_size+1],i,j;
    for(i=0; i<s_size+1; i++){
        for(j=0; j<p_size+1; j++){
            if(i==0 || j==0) table[i][j]=0;//initialize all first row & column as zero
            else if(s[i-1]==p[j-1]) table[i][j]=1+table[i-1][j-1];
            else table[i][j]=max(table[i-1][j],table[i][j-1]);
        }
    }
    return table[s_size][p_size];
}
int main()
{
    string s="AGGTAB",p="GXTXAYB";
    long long x=fnc(s,s.size(),p,p.size());
    cout << "LCS Length Is: "<< x << endl;
    return 0;
}
