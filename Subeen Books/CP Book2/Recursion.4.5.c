#include <stdio.h>
void recurse()
{
    char *s = ("Hurray, I'm Learning Recursion !");
    printf("%s\n",s);
    recurse();
}
int main()
{
    recurse();
    return 0;
}
