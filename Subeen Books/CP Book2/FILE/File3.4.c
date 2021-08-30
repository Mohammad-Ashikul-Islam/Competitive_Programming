#include<stdio.h>
int main()
{
    FILE *fp_in, *fp_out;
    int num1=5,num2=7,sum;
    fp_in = fopen("file_3p4_in.txt","r");
    fp_out = fopen("file_3p4_out.txt","w");
    fscanf(fp_in, "%d",&num1);
    fscanf(fp_in, "%d",&num2);
    sum = num1+num2;
    printf("%d + %d = %d\n",num1,num2,sum);
    fprintf(fp_out, "%d\n",sum);
    fclose(fp_in); fclose(fp_out);
    return 0;
}
