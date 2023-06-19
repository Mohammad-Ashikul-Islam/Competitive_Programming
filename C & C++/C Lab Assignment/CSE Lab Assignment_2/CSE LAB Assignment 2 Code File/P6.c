#include<stdio.h>
int main()
{
    double unit,bill;
    char name[20];
    printf("Please Enter The Name Of The Of The User: ");
    scanf(" %[^\n]",name);
    printf("Please Enter The Total Unit: ");
    scanf("%lf",&unit);
    if(unit<=100){
        bill = unit*1.75;
    }
    else if(unit>100 && unit<=300){
        bill= (100*1.75)+((unit-100)*2.25);
    }
    else{
        bill = (100*1.75)+(200*2.25)+((unit-300)*3.50);
    }
    if(bill<100){
        bill=100;
    }
    else if(bill>1000){
        bill=bill+(bill*0.15);
    }
    printf("Name Of The User: %s\n",name);
    printf("Charges = %0.2lf\n",bill);
    return 0;
}
