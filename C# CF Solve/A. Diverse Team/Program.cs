int n,k;
string input = Console.ReadLine();
string[] p = input.Split(' ');
n = Convert.ToInt32(p[0]);
k = Convert.ToInt32(p[1]);

input = Console.ReadLine();
string[] s = input.Split(' ');
int[] ara = new int[n];
for (int i = 0; i < n; i++) ara[i] = Convert.ToInt32(s[i]);
int[] num = new int[n];
int[] index = new int[n];
for(int i = 0; i < n; i++)
{
    num[i] = -1;
    index[i] = -1;
}
int ind = 0;
for(int i = 0;i < n; i++)
{
    bool found = false;
    for(int j=0; j<num.Length; j++)
    {
        if (ara[i] == num[j]) found = true;
    }
    if (found==false)
    {
        num[ind] = ara[i];
        index[ind] = i + 1;
        ind++;
    }
}
if (ind < k) Console.WriteLine($"NO");
else
{
    Console.WriteLine("YES");
    for (int i = 0; i < k; i++)
    {
        if(i!=0) Console.Write(" ");
        Console.Write(index[i]);
    }
}