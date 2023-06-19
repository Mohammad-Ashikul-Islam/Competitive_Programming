#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Please Enter A Letter: ");
    scanf("%c",&ch);
    if(ch==toupper(ch)){
        printf("The Opposite Letter Of '%c' Is: '%c'",ch,tolower(ch));
        }
    else{
        printf("The Opposite Letter Of '%c' Is: '%c'",ch,toupper(ch));
        }
    return 0;
}
