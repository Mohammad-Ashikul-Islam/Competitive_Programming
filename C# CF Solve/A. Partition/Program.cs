int n = Convert.ToInt32(Console.ReadLine());
int sum = 0;
string input = Console.ReadLine();
string[] s = input.Split(' ');
int[] ara = new int[n];
for (int i = 0; i < n; i++) ara[i] = Convert.ToInt32(s[i]);
for (int i = 0; i < n; i++) sum += Math.Abs(ara[i]);
Console.WriteLine(sum);