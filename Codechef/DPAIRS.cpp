#include<bits/stdc++.h>
using namespace std;
#define as 1000000005
long long arr[(as+as)/64];

bool check(long long n,int pos){
    long long b=1;
    long  long a=(n&(b<<pos));
    return (bool)a;
}

long long seta(long long n,int pos){
    long long b=1;
    long long a=(n|(b<<pos));
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    vector<int> ar,br;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        ar.push_back(x);
    }
    for(int i=0;i<b;i++){
        int y;
        cin>>y;
        br.push_back(y);
    }
    int flag=0;
    char o;
    for(int i=0;i<ar.size();i++){
        for(int j=0;j<br.size();j++){
            long long sum=ar[i]+br[j];
            if(check(arr[sum/64],sum%64)==0){
                cout<<i<<" "<<j<<endl;
                arr[sum/64]=seta(arr[sum/64],sum%64);
                flag++;
                if(flag==(a+b-1)) goto o;
            }
        }
    }
    o: ;
    return 0;
}

