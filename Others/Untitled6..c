#include <stdio.h>
int main()
{
int a,b,i,lower_index,higher_index;
    scanf("Enter First Number: %d",&a);
    scanf("Enter Second Number: %d", &b);
if(a > b){
b = lower_index;
a = higher_index;
}
else{
a = lower_index;
b = higher_index;
}
for(i= 2; i <= lower_index; i++){
    if (a % i == 0 && b % i == 0){
printf("GCD between this two number is: %d",i);
{
break;
}
}
else{
    printf("GCD between this two number: 1");
}
}
    return 0;
}
