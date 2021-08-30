#include<stdio.h>
int main()
{
    char fl[10001];
    char sl[2];
    char r;
    int i,T,j,count;
    scanf("%d",&T);
    for(i=1; i<=T; i++){
    scanf(" %[^\n]", fl);
    scanf("%s",sl);
    count = 0;
    for(j=0; j<strlen(fl); j++){
    if(sl[0]== fl[j]){
    count++;
    r=sl[0];
        }
    else if(toupper(sl[0])==toupper(fl[j])){
    count++;
    r=toupper(sl[0]);
        }
    }
    if(count>0){
    printf("Occurrence of '%c' in '%s' = %d\n", r , fl, count);
        }
    else{
    printf("'%c' is not present\n", sl[0]);
        }
    }
    return 0;
}
