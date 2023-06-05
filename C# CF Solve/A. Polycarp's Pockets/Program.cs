int n = Convert.ToInt32(Console.ReadLine());
string input = Console.ReadLine();
string[] s = input.Split(' ');

int[] ara = new int[101];
for (int i = 0; i < 101; i++) ara[i] = 0;
for(int i = 0;i < s.Length; i++)
{
    int temp = Convert.ToInt32(s[i]);
    ara[temp]++;
}
int ans = 0;
for(int i = 0; i<101; i++) ans = Math.Max(ans, ara[i]);
Console.WriteLine(ans);

