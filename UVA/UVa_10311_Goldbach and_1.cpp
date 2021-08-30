#include<bits/stdc++.h>
using namespace std;
const int n=100000002;
int status[(n/32)+2];
bool check(int x,int position){return (bool)(x&(1<<position));}
int Set(int x,int position){return x= x|(1<<position);}
void bitwise_seieve()
{
    status[0>>5]=Set(status[0>>5],0&31);
    status[1>>5]=Set(status[1>>5],1&31);
     for(int j=2+2; j<=n; j+=2) status[j>>5]=Set(status[j>>5],j&31);
    for(int i=3; i*i<=n; i+=2){
        if(check(status[i>>5],i&31)==0){
            for(int j=i*i; j<=n; j+=(i)) status[j>>5]=Set(status[j>>5],j&31);
        }
    }
}

int fnc(int r)
{
    for(int i=r/2; i>=1; i--){
    if((check(status[i>>5],i&31)==0) && (i!=r-i) && (check(status[(r-i)>>5],(r-i)&31)==0)){
            return i;
        }
    }
    return -1;
}

int main()
{
    bitwise_seieve();
    int x;
    while(scanf("%d",&x)==1){
             if(x>1 && (x&1)){
            if((check(status[(x-2)>>5],(x-2)&31)==0))
                printf("%d is the sum of 2 and %d.\n",x,x-2);
            else printf("%d is not the sum of two primes!\n",x);
            continue;
        }
        int b=fnc(x);
        if(b==-1) printf("%d is not the sum of two primes!\n",x);
        else printf("%d is the sum of %d and %d.\n",x,b,x-b);
    }
    return 0;
}

