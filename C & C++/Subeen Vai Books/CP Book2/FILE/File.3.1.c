#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[] = "my_file.txt";
    fp = fopen(filename, "w");
    fprintf(fp, "This is a file created by my program !");
    fprintf(fp, "I'm so happy !");
    fclose(fp); //For More,Watch Self_Practicing
    return 0;
}
