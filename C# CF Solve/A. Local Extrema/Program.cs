int n = Convert.ToInt32(Console.ReadLine());
string input = Console.ReadLine();
string[] s = input.Split(' ');
int[] ara = new int[n];
for (int i = 0; i < n; i++) ara[i] = Convert.ToInt32(s[i]);
int c = 0;
for(int i=1; i<n-1; i++)
{
    if (ara[i] > ara[i - 1] && ara[i] > ara[i + 1]) c++;
    if (ara[i] < ara[i - 1] && ara[i] < ara[i + 1]) c++;
}
Console.WriteLine(c);