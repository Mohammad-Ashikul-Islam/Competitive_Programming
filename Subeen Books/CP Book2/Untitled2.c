#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **ara,num[12],i,j,n;
    printf("Enter the number of total classes: ");
    scanf("%d",&n);
    ara = (int**)malloc(sizeof(int)*n);
    if(ara==0){ printf("Memory allocation failed !\n"); return 1;  }
    for(i=0; i<n; i++){
        printf("Enter the number students for class %d: ",i+1);
        scanf("%d",&num[i]);
        ara[i] = (int*)malloc(sizeof(int)*sizeof(num[i]));
        if(ara[i]==0){ printf("Memory allocation failed !\n"); return 1;  }
        for(j=0; j<num[i]; j++){
          printf("Enter the marks for student %d: ",j+1);
          scanf("%d",&ara[i][j]);
        }
        }
        for(i=0; i<n; i++){
            printf("Class %d: ",1+i);
            for(j=0; j<num[i]; j++)
                printf("%4d",ara[i][j]);
            printf("\n");
        }
    return 0;
}
