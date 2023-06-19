#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,j,k;
    char S[1000];
    int count[26];
    scanf("%d",&T);
    for(j=1; j<=T; j++){
    scanf("%s",S);
    for(i=0; i<strlen(S); i++){
    if(S[i]>= 'a' && S[i]<='z' ){
    count[S[i]-'a']++;
    }
    }
    for(k=0; k<26; k++){
    if(count[k] != 0){
        printf("%c = %d\n", 'a'+k,count[k]);
    }
    }
    }
    return 0;
}
