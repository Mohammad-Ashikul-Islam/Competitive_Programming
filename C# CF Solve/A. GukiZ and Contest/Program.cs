long n = Convert.ToInt64 (Console.ReadLine());
long[] ara = new long[n];
string s = Console.ReadLine();
string p="";
int i, j=0;
for ( i = 0; i<s.Length; i++)
{
    if (s[i] == ' ')
    {
        ara[j] = Convert.ToInt64 (p);
        p = "";
        j++;
    }
    else p += s[i];
}

ara[j]=Convert.ToInt64 (p);

for(i=0; i<ara.Length; i++)
{
    long c = 0;
    for(j=0; j<ara.Length; j++)
    {
        if (ara[i] < ara[j]) c++;
    }
    if (i == 0) Console.Write(c+1);
    else Console.Write($" {c+1}");
}
Console.WriteLine();