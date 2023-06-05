string input = Console.ReadLine();
string[] s = input.Split(' ');
int[] ara = new int[3];
for (int i = 0; i < 3; i++) ara[i] = Convert.ToInt32(s[i]);
int left = ara[0], right = ara[1], both = ara[2], ans = 0;
ans = Math.Min(left, right)*2;
left = left - ans / 2;
right = right - ans / 2;
int n = Math.Max(left, right);
while (n > 0 && both > 0)
{
    ans += 2;
    n--;
    both--;
}
if (both > 0) ans += (both/2)*2;
Console.WriteLine(ans);