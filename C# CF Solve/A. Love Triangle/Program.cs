int n = Convert.ToInt32(Console.ReadLine());
string input = Console.ReadLine();
string[] s = input.Split(' ');
int[] ara = new int[n+1];
for (int i = 0; i < n; i++) ara[i+1] = Convert.ToInt32(s[i]);
bool triangle = false;
for (int i = 1; i <= n; i++)
{
    int num1 = i;
    int num2 = ara[num1];
    int num3 = ara[num2];
    int num4 = ara[num3];
    if(num4 == num1) triangle = true;
}
if (triangle) Console.WriteLine("YES");
else Console.WriteLine("NO");