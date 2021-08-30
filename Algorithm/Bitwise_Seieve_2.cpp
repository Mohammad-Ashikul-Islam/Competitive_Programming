#include<bits/stdc++.h>
using namespace std;
int n=100,status[(100/32)+2];
//Taking Macro Takes Less Time Than Function For Check And Set
bool check(int x,int position){return (bool)(x&(1<<position));}
int Set(int x,int position){return x= x|(1<<position);}
void bitwise_seieve()
{
                                 //Explained (j&31),(j<<5) In Bitwise_Seieve_1
     for(int j=2+2; j<=n; j+=2) status[j>>5]=Set(status[j>>5],j&31);//Manually For 2
    for(int i=3; i*i<=n; i+=2){
        if(check(status[i>>5],i&31)==0){
            for(int j=i*i; j<=n; j+=(i)) status[j>>5]=Set(status[j>>5],j&31);
                                                                    //i<<1 is i*2
        }
    }
	 for(int i=2;i<=n;i+=1)
		 if(check(status[i>>5],i&31)==0)
            printf("%d\n",i);
}
int main()
{
    bitwise_seieve();
    return 0;
}
