#include<bits/stdc++.h>
using namespace std;
const int mx = 20000005;
const int sx= (int)(mx/32)+5;
int ara[sx];
vector<int> twin;

bool check(int ind,int pos){return (bool)(ara[ind]&(1<<pos));}
void change(int ind,int pos){ara[ind]= (ara[ind]|(1<<pos)); }

void bsv()
{
    long long i,j;
    for(i=3; i*i <mx; i+=2){
            if(check(i>>5,i&31)==0){
                for(j=i+i; j<mx; j+=i) change(j>>5,j&31);

        }
    }
    twin.push_back(0);
    for(i=3; i<mx-4; i+=2){
        if((check(i>>5,i&31)==0) && (check((i+2)>>5,(i+2)&31)==0)) twin.push_back(i);
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

