long[] fib = new long[1001];
fib[0] = 0;
fib[1] = 1;
for(int i = 2; i<1001; i++) fib[i] = fib[i - 2] + fib[i-1];
int n = Convert.ToInt32(Console.ReadLine());
for(int i = 1; i <= n; i++)
{
    bool b = false;
    for(int j=0; j<fib.Length; j++)
    {
        if (fib[j] == i) b = true;
    }
    if (b) Console.Write("O");
    else Console.Write("o");
}