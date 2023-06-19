#include<stdio.h>
int main()
{
    long long i,j,m,n;
    printf("Enter the row and colum number of the tables: ");
    scanf("%lld%lld",&n,&m);
    printf("Enter the number of the first table: \n");
    long long ara1[n][m],ara2[n][m],sum[n][m];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++) scanf("%lld",&ara1[i][j]);
    }
    printf("\n\nEnter the number of the second table: \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++) scanf("%lld",&ara2[i][j]);
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++) sum[i][j] = ara1[i][j] + ara2[i][j];
    }
    printf("\nSum of the two table is: \n");
     for(i=0; i<n; i++){
        for(j=0; j<m; j++) printf("%lld ",sum[i][j]);
        printf("\n");
    }
    return 0;
}
