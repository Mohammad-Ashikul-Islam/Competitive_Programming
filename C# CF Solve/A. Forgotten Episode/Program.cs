long n = Convert.ToInt64(Console.ReadLine());
long[] ara =  new long[n+1];
for (int i = 1; i <= n; i++) ara[i] = -1;
string val = Console.ReadLine();
string p = "";
for (int i = 0; i < val.Length; i++)
{
    if (val[i] == ' ')
    {
        long value = Convert.ToInt64(p);
        ara[value] = 0;
        p = "";

    }
    else p += val[i];
}

long temp = Convert.ToInt64(p);
ara[temp] = 0;
for(int i = 1; i <= n; i++)
{
    if (ara[i]==-1) Console.WriteLine(i);
}