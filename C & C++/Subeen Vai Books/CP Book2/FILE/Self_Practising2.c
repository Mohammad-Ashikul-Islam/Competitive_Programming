#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("Self_practising2.txt", "w");
    fprintf(fp, "This is a file created by my program !\n");
    fprintf(fp, "I'm so happy !\n");
    fclose(fp);
    fp = fopen("Self_practising2.txt","a");
    fprintf(fp,"This Is mode testing !");
    fclose(fp);
    return 0;
}
