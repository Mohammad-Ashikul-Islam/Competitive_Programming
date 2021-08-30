#include<stdio.h>
int main()
{
    double A,B,C;
    printf("Please Enter Three Number: ");
    scanf("%lf %lf %lf",&A,&B,&C);
    if(A>=B && A>=C){
        printf("%lf Is The Largest Number\n",A);
    }
    else if(B>=A && B>=C){
        printf("%lf Is The Largest Number\n",B);
    }
    else{
        printf("%lf Is The Largest Number\n",C);
    }
    return 0;
}
