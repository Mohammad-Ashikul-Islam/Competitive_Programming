#include<stdio.h>
int main()
{
    int ara[] = {1,2,3,4,1,2,3};
    int i,result=ara[0],n=7;
    for(i=1; i<n; i++){
        result = result ^ ara[i];
     printf("L Result : %d\n",result);
    }
    printf("Result: %d\n",result);
    return 0;
}
