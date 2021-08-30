#include<bits/stdc++.h>
using namespace std;
const int mx = 20000005;
vector<int> twin;
void bsv()
{
    int i,j;
    bool b[mx+4];
    for(i=1; i<=mx; i++) b[i]=true;
    for(i=3; i*i <mx; i+=2){
            if(b[i]==true){
                for(j=i+i; j<mx; j+=i) b[j]=false;

        }
    }
    twin.push_back(0);
    for(i=3; i<mx-4; i+=2){
        if(b[i]==true && b[i+2]==true) twin.push_back(i);
    }
}
int main()
{
    bsv();
    int s;
    while(scanf("%d",&s)!= EOF){
        printf("(%d, %d)\n",twin[s],twin[s]+2);
    }
    return 0;
}

