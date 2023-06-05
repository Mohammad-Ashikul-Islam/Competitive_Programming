long n = Convert.ToInt64(Console.ReadLine());
string input = Console.ReadLine();
string[] s = input.Split(' ');
long[] ara = new long[n];
for (long i = 0; i < n; i++) ara[i] = Convert.ToInt64(s[i]);
if (n == 1)
{
    if (ara[0] <= 15)
        Console.WriteLine(ara[0]+15);
    else Console.WriteLine(15);
}
else if (ara[0] > 15) Console.WriteLine(15);
else
{
    long current = ara[0];
    for(long i=1; i < n; i++)
    {
        if (ara[i] <= current + 15) current = ara[i];
        else break;
    }
    current = current + 15;
    if (current > 90) current = 90;
    Console.WriteLine(current);
}