#include<bits/stdc++.h>
using namespace std;
int r[105],c[105];
int main()
{
    int ara[105][105],n,i,j,rl,cl,x,y;
    while(cin>>n){
            if(n==0) break;
            x=0;y=0;
        for(i=0; i<n; i++){
            for(j=0; j<n; j++)
                cin >> ara[i][j];
        }
       for(i=0; i<n; i++){
           r[i] = 0;
            for(j=0; j<n; j++)
                r[i]+=ara[i][j] ;
        }
       for(i=0; i<n; i++){
           c[i] = 0;
            for(j=0; j<n; j++)
                c[i]+=ara[j][i] ;
        }
        for(i=0; i<n; i++){
        if(r[i]%2 != 0){x++; rl=i;}
        if(c[i]%2 !=0 ){y++; cl = i;}
        }
        if(x==0 && y==0) cout << "OK\n";
        else if(x==1 && y==1) printf("Change bit (%d,%d)\n",rl+1,cl+1);
        else cout << "Corrupt\n";
    }
    return 0;
}
