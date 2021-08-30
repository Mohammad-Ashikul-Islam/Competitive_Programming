#include<stdio.h>
int main()
{
    int t,i=1,n,m,b,sum,j,p,q,r,x,y,z;
    char ch;
    scanf("%d",&t);
    while(t--){
            sum=0;
            m = 0; b =0;
            scanf("%d %d %d %d",&n,&r,&p,&q);
            sum = sum+n+r+q+p;
        scanf("%d %d %d",&x,&y,&z);
        if(x>y&& x>z){
            m = x; if(y>z) b = y;
            else b = z;
        }
        else if(y>x && y>z){
            m = y; if(x>z) b = x; else b = z;
        }
        else {
            m = z; if(x>y) b =  x; else b = y;
        }
    sum += (b+m)/2;
    if(sum>=90) ch = 'A';
    else if(sum>=80 && sum<90) ch='B';
    else if(sum>=70 && sum<80) ch ='C';
    else if(sum>=60 && sum<70) ch = 'D';
    else if(sum<60) ch = 'F';
    printf("Case %d: %c\n",i++,ch);
    }
    return 0;
}
