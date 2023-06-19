#include<stdio.h>
#include<string.h>
int main()
{
   int T, i;
   char n[101];

   scanf("%d",&T);
   for(i=1; i<=T; i++)
    {
   scanf("%s", &n);
    if(n[strlen(n)-1] == '0' || n[strlen(n)-1] == '2' || n[strlen(n)-1] == '4' || n[strlen(n)-1] == '6' || n[strlen(n)-1] == '8')
    {
        printf("even\n");
    }
    else
        {
        printf("odd\n");
        }
    }
return 0;

}
