long n = Convert.ToInt64(Console.ReadLine());
string input = Console.ReadLine();
string[] s = input.Split(' ');
long[] ara = new long[n];
for (long i = 0; i < n; i++) ara[i] = Convert.ToInt64(s[i]);

long current = 1, mx = 1;
for (long i = 1; i< n; i++)
{
    if (ara[i] > ara[i - 1])
    {
        current++;
        mx = Math.Max(mx, current);
    }
    else current = 1;
}
Console.WriteLine(mx);