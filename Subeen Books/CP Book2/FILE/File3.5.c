#include<stdio.h>
int main()
{
    FILE *fp_in, *fp_out;
    char line[80] = "7 8";
    int num1,num2,sum;
    fp_in = fopen("file_3p4_in.txt", "r");
    fp_out = fopen("file_3p5_out.txt", "w");
    fgets(line, 80, fp_in);
    printf("line: %s\n",line);
    sscanf(line, "%d %d",&num1,&num2);
    sum = num1+num2;
    printf("%d + %d = %d\n",num1,num2,sum);
    fprintf(fp_out, "%d\n",sum);
    fclose(fp_in); fclose(fp_out);
    return 0;
}
