#include<bits/stdc++.h>
using namespace std;
float euler_function(float x,float y)
{
    return (2*x)+(6*y);//my id c171026,A=2,b=6
}
int main()
{
    float x[20],y[20],x0,y0,h;
    int n,i;
    printf("Enter the value of h: ");
    scanf("%lf",&h);
    printf("Enter the value of x0: ");
    scanf("%lf",&x0);
    printf("Enter the value of y0: ");
    scanf("%lf",&y0);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        float d=euler_function(x0,y0);
        y[i]=y[0]+(h*d);
        printf("%lf\n",y[i]);
        x0+=h;
        y0=y[i];
    }
    return 0;
}
