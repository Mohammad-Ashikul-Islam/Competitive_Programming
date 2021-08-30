#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i;
    cin >> t;
    for(i=1; i<=t; i++){
        long long j,res=0,n,temp,sum=0;
        stack <int> x,y;
            cin >> n;
            for(j=1; j<=n*2; j++) {
                cin >> temp;
                x.push(temp);
            }
            while(x.empty()==false){
                sum=x.top();
                x.pop();
                sum += x.top()+res;
                x.pop();
                if(sum>9){
                    y.push(sum%10);
                    res = sum/10;
                }
                else{
                    y.push(sum);
                    res = 0;
                }
            }
            if(res!=0) y.push(res);
            while(y.empty()==false) {cout << y.top(); y.pop(); }
            cout << endl;
            if(i!=t) cout << endl;
    }

    return 0;
}
