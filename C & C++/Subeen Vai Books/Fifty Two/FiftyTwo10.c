#include <stdio.h>
int main()
{
    int T , i, r1, r2, B, bp;
    double cr, ar; /*Current And Asking Runrate,bp Is Ball Played */

    scanf("%d", &T);
    while(T--){
        scanf("%d %d %d",&r1,&r2, &B);
        bp = 300 - B;
        cr = (r2*1.0/bp)*6;
        ar = ((r1-r2+1)*1.0/B)*6;
        printf("%0.2lf %0.2lf\n", cr, ar);
    }
    return 0;
}
