int n = Convert.ToInt32(Console.ReadLine());
string input = Console.ReadLine();
string[] s = input.Split(' ');
int[] ara = new int[n];
for (int i = 0; i < n; i++) ara[i]= Convert.ToInt32(s[i]);
Array.Sort(ara);
if(n%2==1) Console.WriteLine(ara[n/2]);
else Console.WriteLine(ara[n/2-1]);