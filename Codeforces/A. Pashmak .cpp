#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,x,y;
    cin >> a >> b >> x >> y;
    if(a!=x && b!=y){
        if(abs(a-x) != abs(b-y)){
            cout << "-1\n";
        }
        else{
            cout << a << " " << y << " " << x << " "<< b << endl;
        }
    }
    else if(a==x){
            cout << a+abs(b-y) << " " << b << " " << x+abs(b-y) << " "<< y << endl;
    }
    else{
            cout << a << " " << b+abs(a-x) << " " << x << " "<< y+abs(a-x)<< endl;
    }
    return 0;
}
