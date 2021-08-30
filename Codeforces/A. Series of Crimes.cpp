#include<bits/stdc++.h>
using namespace std;
long long uncommon(vector<long long> v)
{
    if(v[0]==v[1]) return v[2];
    else if(v[0]==v[2]) return v[1];
    else return v[0];
}
int main()
{
    long long r,c;
    cin >> r >> c;
    char s[r][c];
    for(long long i=0; i<r; i++){
            for(long long j=0; j<c; j++){
        char k;
        cin >>k;
        s[i][j]=k;
            }
    }
    vector<long long> row,column;
    for(long long i=0; i<r; i++){
        for(long long j=0; j<c; j++){
            if(s[i][j]=='*'){
                row.push_back(i+1); column.push_back(j+1);
            }
        }
    }
    long long x=uncommon(row),y=uncommon(column);
    cout << x << " "<<y<< endl;
    return 0;
}
