#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a=0,b=0,x,i;
    bool flag=true;
    cin >> n;
    deque<long long> d;
    for(i=0; i<n; i++){cin >> x; d.push_back(x);}
    while(d.empty()!=true){
            if(flag==true){
        if(d.front()>d.back()){
            a+= d.front(); d.pop_front(); flag=false;
        }
        else {a+=d.back(); d.pop_back(); flag=false;}
            }
            else{
                if(d.front()>d.back()){
            b+= d.front(); d.pop_front(); flag=true;
        }
        else {b+=d.back(); d.pop_back(); flag=true;}
                //flag=true;
            }
    }
    cout << a << " " << b << endl;
    return 0;
}

