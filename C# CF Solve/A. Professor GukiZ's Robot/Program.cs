int[] ara = new int[4];
string input = Console.ReadLine();
input = input + " " +Console.ReadLine();
string[] s = input.Split(' ');
int i = 0;
foreach (string s2 in s)
{
    ara[i] = Convert.ToInt32(s2);
    i++;
}
int ans = Math.Max(Math.Abs(ara[0] - ara[2]), Math.Abs(ara[1] - ara[3]));
Console.WriteLine(ans);