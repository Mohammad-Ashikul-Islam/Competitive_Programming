#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Please Enter Your Date In dd-mm-yy Format: ");
    scanf("%d-%d-%d",&x,&y,&z);
    switch(y){
    case 1:
        printf("January ");
        break;
    case 2:
        printf("February ");
        break;
    case 3:
        printf("March ");
        break;
    case 4:
        printf("April ");
        break;
    case 5:
        printf("May ");
        break;
    case 6:
        printf("June ");
        break;
    case 7:
        printf("July ");
        break;
    case 8:
        printf("August ");
        break;
    case 9:
        printf("September ");
        break;
    case 10:
        printf("October ");
        break;
    case 11:
        printf("November ");
        break;
    case 12:
        printf("December ");
        break;
    }
    switch(x){
        case 1:
        case 21:
        case 31:
            printf("%dst, %d",x,z);
            break;
        case 2:
        case 22:
            printf("%dnd, %d",x,z);
            break;
        case 3:
        case 23:
            printf("%drd, %d",x,z);
            break;
        default:
            printf("%dth, %d",x,z);
    }
    return 0;
}
