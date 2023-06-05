long t = Convert.ToInt64(Console.ReadLine());
for (long tc = 0; tc < t; tc++)
{
    long n = 2;
    string input = Console.ReadLine();
    string[] s = input.Split(' ');
    long[] ara = new long[n];
    for (long i = 0; i < n; i++) ara[i] = Convert.ToInt64(s[i]);
    long a = ara[0], b = ara[1];
    if(a*2>b) Console.WriteLine("-1 -1");
    else Console.WriteLine($"{a} {2*a}");
}
