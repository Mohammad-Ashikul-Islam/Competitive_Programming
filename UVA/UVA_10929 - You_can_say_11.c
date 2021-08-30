#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000];
    long long sum,i,k;
    while(gets(s)){
        if(strcmp(s,"0")==0) break;
        sum =0;k=0;
        for(i=0; i<strlen(s); i++){
            if(k==0) { sum += (s[i]-48); k=1; }
            else if(k==1) { sum -= (s[i]-48); k=0; }
        }
        if(sum%11==0)
            printf("%s is a multiple of 11.\n",s);
        else
            printf("%s is not a multiple of 11.\n",s);
    }
    return 0;
}
