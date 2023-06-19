#include<stdio.h>
#include<stdio.h>
int main()
{
    int x1,x2,y1,y2,T,r,m;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&x1,&x2);
        scanf("%d",&r);
        scanf("%d %d",&y1,&y2);
        m = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
        if(m>r){
            printf("The point is not inside the circle\n");
        }
        else{
            printf("The point is inside the circle\n");
        }
    }
    return 0;
}
