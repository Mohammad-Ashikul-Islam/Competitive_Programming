#include<bits/stdc++.h>
using namespace std;
void fnc(int& x, int& y){
    int temp = x;   x = y; y=temp;
}
int main()
{
    int a=5,b=6;
    int& x=a;//reference must be initialized when it is declared
    int& y=b;
    cout << x<< " "<<y << endl;
    fnc(x,y);
    cout << x << " " << y << endl;
    fnc(a,b);
    cout << a << " "<< b << endl;
    return 0;
}
