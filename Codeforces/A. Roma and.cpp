#include<bits/stdc++.h>
using namespace std;
bool fnc(string s,long long k){
    long long cnt = count(s.begin(),s.end(),'4')+count(s.begin(),s.end(),'7');
    if(cnt>k) return false;
    else return true;
}
int main()
{
    long long n,k,c=0;
    cin >> n >> k;
    for(long long i=0; i<n; i++){
        string temp;
        cin >> temp;
        if(fnc(temp,k)) c++;
    }
    cout << c << endl;
    return 0;
}



