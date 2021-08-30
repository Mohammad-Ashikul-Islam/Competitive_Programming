#include<stdio.h>
int isLeapYear(int year)
{
if (year % 400 == 0) return 1;
else if(year % 100 == 0) return 0;
else if(year % 4 == 0) return 1;
else return 0;
}

int main()
{
    int T,i,D,M,Y,QY,j,c;
    scanf("%d",&T);
    for(i=1; i<=T;i++){
        scanf("%d %d %d %d",&D,&M,&Y,&QY);
        c =0;
        if(D==29 && M==2){
            for(j=Y+1;j<=QY;j++){
               c += isLeapYear(j);
            }
        }
        else c = QY-Y;
        printf("Case %d: %d\n",i,c);
    }
    return 0;
}
