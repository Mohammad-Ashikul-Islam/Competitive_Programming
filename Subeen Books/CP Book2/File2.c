#include<stdio.h>
int main()

{
    FILE *fp;
    char filename[] = "my_file.txt";

    fp = fopen(filename, "w");

    fprintf(fp, "This is file created by my program ! ");
    fprintf(fp, "I am so happy.\n");

    fclose(fp);
    fopen(filename, "a");
    fprintf(fp, "Second Line. \n");
    return 0;
}

