#include<stdio.h>
int main()
{
    double Gross,Hours,Net,Rate;
    printf("Please Enter The Working Hours And Rate Per Hour Of The Employee: ");
    scanf("%lf %lf",&Hours,&Rate);
    Gross = Hours * Rate;
    if(Gross<5000){
        printf("Gross Pay Of The Employee: %.2lf\n",Gross);
        printf("Net Pay Of The Employee: %.2lf\n",Gross);
    }
    else{
            Net = Gross - (Gross*.05);
        printf("Gross Pay Of The Employee: %.2lf\n",Gross);
        printf("Net Pay Of The Employee: %.2lf\n",Net);
    }
    return 0;
}
