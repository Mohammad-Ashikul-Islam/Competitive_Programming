long n = Convert.ToInt64(Console.ReadLine());
if(n % 10 <= 5) n = n - (n % 10);
else n = n + (10 - (n%10));
Console.WriteLine(n);
