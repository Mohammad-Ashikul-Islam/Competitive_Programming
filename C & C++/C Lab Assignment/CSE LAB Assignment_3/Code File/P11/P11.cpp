#include<stdio.h>
int main()
{
    int a,sum = 1;
    printf("Please Enter The Number: ");
    scanf("%d",&a);
    if(a<0)
    printf("Invalid Number\n");
    else{
    printf("Factorial of %d = ",a);
    while(a!=0){
      sum *= a;
        a--;
        }
    printf("%d\n",sum);
        }
    return 0;
}
