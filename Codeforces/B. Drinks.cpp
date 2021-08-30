#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,x;
    long double sum=0.0;//using double makes problem.don't know why,use long double
    cin >> n;
    for(i=0; i<n; i++){cin >> x; sum+=x;}
    sum = sum/(n*1.00);
    printf("%.12Lf\n",sum);//Long Double Is %Lf,not lf
    return 0;
}
