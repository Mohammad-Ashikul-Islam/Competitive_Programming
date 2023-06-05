long n = 3;
string input = Console.ReadLine();
string[] s = input.Split(' ');
long[] ara = new long[n];
for (long i = 0; i < n; i++) ara[i] = Convert.ToInt64(s[i]);
long a = ara[0], b = ara[1], c = ara[2];

if(a>b+c) Console.WriteLine("+");
else if(b>a+c) Console.WriteLine("-");
else if(a==b && c==0)  Console.WriteLine("0");
else Console.WriteLine("?");