#include<stdio.h>
int main()
{
    char ch;
    printf("Please Enter The Alphabet: ");
    scanf("%c",&ch);
    switch(ch){
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
    printf("'%c' Is A Vowel !",ch);
    break;
    default:
    printf("'%c' Is A Consonant !",ch);
    break;
        }
    return 0;
}
