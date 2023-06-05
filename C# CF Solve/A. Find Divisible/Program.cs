long n = Convert.ToInt64 ( Console.ReadLine() );

for(long tc= 0; tc < n; tc++)
{
    long l = 2;
    string input = Console.ReadLine();
    string[] s = input.Split(' ');
    long[] ara = new long[l];
    for (long i = 0; i < l; i++) ara[i] = Convert.ToInt64(s[i]);
    long a = ara[0], b = ara[1];
    Console.WriteLine($"{a} {a * 2}");
}