int n = Convert.ToInt32(Console.ReadLine());
string input = Console.ReadLine();
string[] s = input.Split(' ');
int[] ara = new int[n];
for (int i = 0; i < n; i++) ara[i] = Convert.ToInt32(s[i]);

int l = Convert.ToInt32(Console.ReadLine());
input = Console.ReadLine();
string[] p = input.Split(' ');
int[] arr = new int[l];
for(int i=0; i<l; i++) arr[i] = Convert.ToInt32(p[i]);

Array.Sort(arr);
Array.Reverse(arr);
Array.Sort(ara);
Array.Reverse(ara);
Console.WriteLine($"{ara[0]} {arr[0]}");
