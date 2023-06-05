long n = Convert.ToInt64 (Console.ReadLine());
long x = n;
if (n % 2 == 0) n = n;
else n--;
long a = n, b = 2;
if (a > x || b > x) Console.WriteLine(-1);
else Console.WriteLine($"{a} {b}");