#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,j,k,r,temp;
    char s[6];
    scanf("%d",&T);
    for(i=1; i<=T; i++){
            temp = 0;
    r = 5;
        while(r--){
            scanf("%s",s);
            for(j=0;j<5; j++){
                if(s[j]=='|'){
                for(k=j; k<5; k++){
                    if(s[k]=='>')
                    temp += 1;
                    }
                }
              if(s[j]=='<'){
                for(k=j; k<5; k++){
                    if(s[k]=='|')
                    temp += 1;
                    }
            }
        }
        }
        if(temp==0)
            printf("Case %d: Thik Ball\n",i);
        else
            printf("Case %d: No Ball\n",i);
    }
    return 0;
}
