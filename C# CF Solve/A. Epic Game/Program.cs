long gcd(long num1, long num2)
{
    long Remainder;

    while (num2 != 0)
    {
        Remainder = num1 % num2;
        num1 = num2;
        num2 = Remainder;
    }

    return num1;
}


long[] ara = new long[3];
string val = Console.ReadLine();
string p = "";
for (int i = 0, j = 0; i < val.Length; i++)
{
    if (val[i] == ' ')
    {
        long value = Convert.ToInt64(p);
        ara[j] = value;
        j++;
        p = "";

    }
    else p += val[i];
}

ara[2] = Convert.ToInt64(p);
long a = ara[0], b = ara[1], n = ara[2], turn = 1;
while (true)
{
    if(turn ==1)
    {
        n = n - gcd(a,n);
        if (n < 0) break;
        turn = 2;

    }
    else if(turn ==2)
    {
        n = n - gcd(b, n);
        if(n < 0) break;
        turn = 1;
    }
}
if(turn == 1) Console.WriteLine(1);
else Console.WriteLine(0);  