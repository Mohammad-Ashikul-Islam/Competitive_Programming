#include<stdio.h>
int main()
{
    long long i,j,n,m;
    printf("Enter the row and colum number: ");
    scanf("%lld%lld",&n,&m);
    long long ara[n][m];
    for(i=0; i<n; i++){
     for(j=0; j<m; j++)       scanf("%lld",&ara[i][j]);
    }
    printf("\n\n");
    for(j=0; j<m; j++){
        for(i=0; i<n; i++) printf("%lld ",ara[i][j]);
        printf("\n");
    }
    printf("\n");
    return 0;
}
