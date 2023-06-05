long t = Convert.ToInt64(Console.ReadLine());
for (long tc = 0; tc < t; tc++)
{
    long n = 2;
    string input = Console.ReadLine();
    string[] s = input.Split(' ');
    long[] ara = new long[n];
    for (long i = 0; i < n; i++) ara[i] = Convert.ToInt64(s[i]);
    long a = ara[0], b = ara[1];
    if(a % b  == 0 && a>0) Console.WriteLine(0);
    else if (a > b)
    {
        long temp = a % b;
        temp = b - temp;
        Console.WriteLine(temp);
    }
    else
    {
        Console.WriteLine(b-a);
    }
}