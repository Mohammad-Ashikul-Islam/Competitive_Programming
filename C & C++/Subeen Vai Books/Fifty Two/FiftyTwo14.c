#include<stdio.h>
int main()
{
    char fl[10001];
    char sl[2];
    int i,T,j,count;
    scanf("%d",&T);
    for(i=1; i<=T; i++){
    scanf(" %[^\n]", fl);
    scanf("%s",sl);
    count = 0;
    for(j=0; j<strlen(fl); j++){
    if(sl[0]== fl[j]){
    count++;
    }
    }
    if(count>0){
    printf("Occurrence of '%c' in '%s' = %d\n", sl[0], fl, count);
    }
    else{
    printf("'%c' is not present\n", sl[0]);
    }
    }
    return 0;
}
