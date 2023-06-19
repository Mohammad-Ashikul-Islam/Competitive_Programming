#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    printf("Data type       CharacterData(Bits)     Data Range\n");
    printf("INT              %d                     %d      to      %d\n",sizeof(int)*8,INT_MIN,INT_MAX);
    printf("CHAR             %d                     %d      to      %d\n",sizeof(char)*8,CHAR_MIN,CHAR_MAX);
    printf("FLOAT            %d                     %g      to      %g\n",sizeof(float)*8,FLT_MIN,FLT_MAX);
    printf("DOUBLE           %d                     %g      to      %g\n",sizeof(double)*8,DBL_MIN,DBL_MAX);
    return 0;
}
