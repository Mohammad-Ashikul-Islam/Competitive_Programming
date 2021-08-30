#include<stdio.h>
int main()
{
    long long i,j,n,sum=0,m;
    printf("Enter the number of colums and rows: ");
    scanf("%lld%lld",&n,&m);
    long long ara[n][m];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++) scanf("%lld",&ara[i][j]);
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            sum += ara[i][j];
        }
        printf("Sum of the row %lld is %lld\n",i+1,sum);
        sum = 0;
    }
    for(j=0; j<m; j++){
   for(i=0; i<n; i++){
            sum += ara[i][j];
        }
        printf("Sum of the column %lld is %lld\n",j+1,sum);
        sum = 0;
    }
    printf("\n");
    return 0;
}
