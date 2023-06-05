int n, k,i;
string input = Console.ReadLine();
string[] s = input.Split(' ');
n = Convert.ToInt32(s[0]);
k = Convert.ToInt32(s[1]);
input = Console.ReadLine();
s = input.Split(' ');
int[] ara = new int[n];
for ( i = 0; i < s.Length; i++) ara[i]= Convert.ToInt32(s[i]);
int ans = 0;
for( i = 0;i < ara.Length; i++)
{
    if (ara[i] > k) break;
    else ans++;
}
if(i < n)
{
    for(int j=n-1; j!=i; j--)
    {
        if (ara[j] > k) break;
        else ans++;
    }
}
Console.WriteLine(ans);