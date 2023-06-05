long t = Convert.ToInt64(Console.ReadLine());
for(long tc = 0; tc < t; tc++)
{
    long[] cnt = new long[101];
    for (long i = 0; i < 101; i++) cnt[i] = 0;
    long n = Convert.ToInt64(Console.ReadLine());
    string input = Console.ReadLine();
    string[] s = input.Split(' ');
    long[] ara = new long[n];
    for (long i = 0; i < n; i++) ara[i] = Convert.ToInt64(s[i]);
    long num = 0;
    for(long i= 0; i < n; i++) cnt[ara[i]]++;
    for(long i=0; i< 101; i++)
    {
        if (cnt[i] == 1) num = i;
    }
    for (long i= 0; i < n; i++)
    {
        if (ara[i] == num) Console.WriteLine(i+1);
    }
}