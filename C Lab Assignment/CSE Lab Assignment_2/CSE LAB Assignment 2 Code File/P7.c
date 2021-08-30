#include<stdio.h>
int main()
{
    char p1,p2;
    printf("Please Enter First & Second Player's Choice=> 'R' For Rocks,'P' For Paper,'S' For Scissor: ");
    scanf("%c %c",&p1,&p2);
    if((p1=='P' && p2=='R')||(p1=='S' && p2=='P')||(p1=='R' && p2=='S')){
        printf("PLayer-1 Is The Winner !");
        }
    else if ((p2=='P' && p1=='R')||(p2=='S' && p1=='P')||(p2=='R' && p1=='S')){
        printf("PLayer-2 Is The Winner !");
        }
    else{
        printf("No Winner.Both Player Have Chosen Same Element,Game Drawn !");
        }
    return 0;
}
