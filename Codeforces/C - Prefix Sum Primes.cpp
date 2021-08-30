#include<bits/stdc++.h>
using namespace std;
bool primes[400005];
void func()
{
    for(long i=0; i<=400001; i++) primes[i]=true;
    primes[0]=primes[1]=false;
    for(long i=4; i<=400001; i+=2) primes[i]=false;
    for(long i=3; i<=sqrt(400001); i+=2){
        if(primes[i]==true){
        for(long j=i*i; j<=400001; j+=i) primes[j]=false;
        }
    }
}
int main()
{
    func();
    long n;
    cin >> n;
    int ara[n],c1=0,c2=0,i;
    for(i=0; i<n; i++){
        cin >> ara[i];
        if(ara[i]==1) c1++;
        else c2++;
    }
    long ans=0;
    bool flag=false;
    while(c1>0 && c2>0){
    if(flag==true) cout << " ";
    else flag=true;
        if(primes[ans+1]==true){cout <<"1"; c1--; ans+=1;}
        else if(primes[ans+2]==true) {cout << "2"; c2--; ans+=2;}
        else {cout<<"2"; c2--; ans+=2;}
    }

    while(c1){
           if(flag==true) cout << " ";
    else{flag=true;}
    cout << "1";
    c1--;
    }
    while(c2){
           if(flag==true) cout << " ";
    else{flag=true;}
    cout << "2"; c2--;
    }
    cout << endl;
    return 0;
}
