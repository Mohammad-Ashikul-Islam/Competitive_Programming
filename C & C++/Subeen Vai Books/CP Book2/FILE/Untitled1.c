#include<stdio.h>
void fnc(int x){
    if(x==0) return;
    else fnc(x/2);
    printf("%d",x%2);
}
int main()
{
    int n; scanf("%d",&n);
    if(n==0) printf("0");
    else
    fnc(n);
    return 0;
}
