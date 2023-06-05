long t = Convert.ToInt64(Console.ReadLine());

for(int tc = 0; tc < t; tc++)
{
    long n = Convert.ToInt64(Console.ReadLine());
    string s = Console.ReadLine();
    int i;
    for(i=0; i<n; i++)
    {
        if (s[i] == '8') break;
    }
    long c = 0;
    for (; i < n; i++) c++;
    if (c >= 11) Console.WriteLine("YES");
    else Console.WriteLine("NO");
}