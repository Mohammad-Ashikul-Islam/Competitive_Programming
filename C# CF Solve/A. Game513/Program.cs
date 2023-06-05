string input = Console.ReadLine();
string[] s = input.Split(' ');
int[] ara = new int[4];
for (int i = 0; i < 4; i++) ara[i] = Convert.ToInt32(s[i]);
int a = ara[0], b = ara[1];
if(a > b) Console.WriteLine($"First");
else Console.WriteLine($"Second");
