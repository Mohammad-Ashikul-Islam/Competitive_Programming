#include<stdio.h>
int main()
{
    int T,count;
    double X;
    scanf("%d",&T);
    while(T--){
        scanf("%lf",&X);
        count = 0;
        while(X>1.0){
        X = X/2;
            count++;
            }
        printf("%d days\n",count);
        }
    return 0;
    }
