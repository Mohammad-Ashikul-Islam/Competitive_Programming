long n = Convert.ToInt64(Console.ReadLine());
long[] ara = new long[n];
string val = Console.ReadLine();
string p = "";
for (int i = 0,j=0; i < val.Length; i++)
{
    if (val[i] == ' ')
    {
        long value = Convert.ToInt64(p);
        ara[j] = value;
        j++;
        p = "";

    }
    else p += val[i];
}

long temp = Convert.ToInt64(p);
ara[n-1] = temp;
val = Console.ReadLine();
long x=0, y;
p = "";
for (int i = 0; i < val.Length; i++)
{
    if (val[i] == ' ')
    {
        x = Convert.ToInt64(p);
        p = "";

    }
    else p += val[i];
}

temp = Convert.ToInt64(p);
y = temp;
x--;
y--;
if (x == y) Console.WriteLine(0);
else
{
    long sum1=0, sum2=0;
    for (long i = Math.Min(x,y); i < Math.Max(x,y); i++ )
    {
        sum1 += ara[i];
    }
    for(long i = Math.Max(x,y); ;)
    {
        sum2 += ara[i];
        i++;
        if (i == n) i = 0;
        if (i == Math.Min(x, y)) break;
    }
    //sum2 -= ara[Math.Min(x,y)];
    Console.WriteLine(Math.Min(sum1, sum2));

}
