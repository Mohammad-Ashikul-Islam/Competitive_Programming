#include<stdio.h>
int main()
{
    long long unsigned a,b,c,x,y,z;
    while(scanf("%llu %llu %llu",&a,&b,&c)){
        if(a==0 && b==0 && c==0) break;
        if(a>=b && a>=c){  x=a; y=b; z=c; }
        else if(b>=a && b>=c){
            x=b; y=a; z=c;}
        else{x=c; y=a;z=b;}
        if((x*x)==((y*y)+(z*z)))
            printf("right\n");
        else
            printf("wrong\n");
    }

    return 0;
}
