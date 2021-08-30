#include<stdio.h>
int main()
{
    int n,i,m;
    int ara[21] = {1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441,
1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224,
47045881, 64000000 , 85766121};
    while(scanf("%d",&n)){
        if(n==0)
            break;
        else{
                m=0;
           for(i=0; i<21; i++){
            if(ara[i]==n){
                m += 1;
                break;
            }
           }
           if(m==1)
                printf("Special\n");
           else
            printf("Ordinary\n");
        }
    }
    return 0;
}
