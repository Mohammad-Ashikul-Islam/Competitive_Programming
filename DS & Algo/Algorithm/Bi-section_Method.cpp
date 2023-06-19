#include<bits/stdc++.h>
using namespace std;
double fnc(double n){
    double low=0.0,high=n,mid;
    while(high-low>0.000001){
        mid=(low+high)/2;
        if(mid*mid>n) high=mid;
        else low=mid;
    }
    return mid;
}
int main()
{
    double n;
    cin >> n;
    cout << fnc(n);
    return 0;
}
