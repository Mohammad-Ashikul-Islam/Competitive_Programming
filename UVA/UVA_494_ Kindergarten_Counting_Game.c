#include<stdio.h>
#include<string.h>
int main()
{
    long long unsigned t,i,count=0,k;
    char s[1001];
    while(gets(s)){
        k=0; count=0;
        for(i=0; i<strlen(s); i++){
        if((s[i]>='A' && s[i]<='Z')|| (s[i]>='a' && s[i]<='z'))
          k=1;
          else{
                if(k==1){
            k=0;  count++;}
          }
        }
        count += k;
        printf("%llu\n",count);
    }
    return 0;
}
