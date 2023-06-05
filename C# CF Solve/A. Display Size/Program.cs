long n = Convert.ToInt64 (Console.ReadLine());
long a = 1, b = n;
for(long i=1; i<=n; i++)
{
    if (n % i == 0)
    {
        long x = i, y = n / i;
        if( Math.Abs(x-y) < b - a)
        {
            a = Math.Min(x, y);
            b = Math.Max(x, y);
        }
    }
}
Console.WriteLine($"{a} {b}");