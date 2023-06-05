long n, m,sum = 0, i;
n = Convert.ToInt32(Console.ReadLine());
m = Convert.ToInt32(Console.ReadLine());
long[] ara = new long[n];
for (i = 0; i < n; i++) ara[i] = Convert.ToInt32(Console.ReadLine());
Array.Sort(ara);
Array.Reverse(ara);
for(i=0; i<ara.Length && sum<m; i++) sum += ara[i];


Console.WriteLine(i);