long t = Convert.ToInt64(Console.ReadLine());
for(long tc = 0; tc < t; tc++)
{
    string input = Console.ReadLine();
    string[] s = input.Split(' ');
    long[] ara = new long[2];
    for (long i = 0; i < 2; i++) ara[i] = Convert.ToInt64(s[i]);
    long n = ara[0], k = ara[1];
    for(int i=0; i<n; i++)
    {
        char ch = Convert.ToChar('a' + (i % k));
        Console.Write(ch);
    }
    Console.WriteLine();
}
