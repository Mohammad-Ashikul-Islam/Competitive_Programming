#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *marks;
    int i,n;
    printf("Please enter the number of the student: ");
    scanf("%d",&n);
    //now allocate memory
    marks = (int *)malloc(sizeof(int)*n);
    printf("Enter the marks for each student: \n");
    for(i=0; i<n; i++)
        scanf("%d",&marks[i]);
        for(i=0; i<n; i++)
            printf("%d\n",marks[i]);
    return 0;
}
