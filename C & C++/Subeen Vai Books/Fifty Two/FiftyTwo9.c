#include<stdio.h>
#include<math.h>
int main()
{
    int T,i,num,sr;
    scanf("%d",&T);
    for(i=1; i<=T; i++){
    scanf("%d",&num);
    sr = sqrt(num);

    if (sr * sr == num){
    printf("YES\n");
    }
    else{
    printf("NO\n");
    }
    }
    return 0;
}
