#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long r,c,i,j,blocked_row=0,blocked_column=0;
    cin >> r >> c;
    char s[r][c];
    for(i=0; i<r; i++){
            bool flag=0;
        for(j=0; j<c; j++){
            cin >> s[i][j];
            if(s[i][j]=='S' && flag==0){flag=1; blocked_row++;}
        }
    }
    for(i=0; i<c; i++){
            bool flag=0;
        for(j=0; j<r; j++){
            if(s[j][i]=='S' && flag==0){ flag=1; blocked_column++;}
        }
    }
    //cout << "blocked row : blocked_column="<< blocked_row << " : "<< blocked_column << endl;
    cout << (r*c)-(blocked_row*blocked_column) << endl;
    return 0;
}
