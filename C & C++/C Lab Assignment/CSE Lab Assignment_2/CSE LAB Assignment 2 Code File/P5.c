#include<stdio.h>
int main()
{
    double score;
    printf("Please Enter The Score Of The Student: ");
    scanf("%lf",&score);
    if(score>=80 && score<=100){
        printf("The Grade Of The Student = A");
    }
    else if(score>=65 && score<=79){
        printf("The Grade Of The Student = B");
    }
    else if(score>=50 && score<=64){
        printf("The Grade Of The Student = C");
    }
    else if(score>=40 && score<=49){
        printf("The Grade Of The Student = D");
    }
    else{
        printf("The Grade Of The Student = F");
    }
    return 0;
}
