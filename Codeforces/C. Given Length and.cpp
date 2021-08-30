#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(long long index=start; index<limit; index++)
int main()
{
    ll m,s;
    cin >> m >> s;
    if(s==0){
        if(m==0 || m==1) cout << 0 << " " << 0 << endl;
        else  cout << -1 << " " << -1 << endl;
    }
    else if(9*m < s) cout << -1 << " " << -1 << endl;
    else{
        string maximum,minimum;
        ll sum=s;
        for(ll i=0; i<m; i++){
            maximum.push_back('9');
            if(sum <10) maximum[i]=sum+'0',sum-=sum;
            else sum = sum-9;
        }
        ll sum1 = s;
        for(ll i=0; i<m; i++){
            if(i==0) minimum.push_back('1'),sum1 -=1;
            else minimum.push_back('0');
        }
        for(ll i=minimum.size()-1; i>=1; i--){
            if(sum1<=9) minimum[i]= sum1+'0',sum1-=sum1;
            else minimum[i]='9',sum1-=9;
        }
        if(sum1>0 && sum<9){minimum[0]=(1+sum1)+'0',sum1=sum1-sum1;}
        if(sum>0 && sum1>0) cout << "-1 -1\n";
        else{
            cout << minimum << " " << maximum << endl;
        }
    }
    return 0;
}


