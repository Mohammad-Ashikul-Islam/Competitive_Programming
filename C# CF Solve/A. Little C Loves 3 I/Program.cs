long n = Convert.ToInt64(Console.ReadLine());
if (n % 3 == 0) Console.WriteLine($"{1} {1} {n - 2}");
else Console.WriteLine($"{1} {2} {n - 3}");
