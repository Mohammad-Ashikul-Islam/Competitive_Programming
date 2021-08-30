#include<bits/stdc++.h>
using namespace std;
const int n=100000002;
int status[(n/32)+2];
vector<int> v;
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
    v.push_back(0); v.push_back(2);
    for(int i=3; i<=n; i+=2){
        if(check(status[i>>5],i&31)==0)
                v.push_back(i);
    }

}

int main()
{
    bitwise_seieve();
    for(int i=1; v[i]<=100000000; i+=100){
        printf("%d\n",v[i]);
        if(i+100>=v.size()) break;
    }
    return 0;
}
