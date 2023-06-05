long p,n;
string val, temp = "";
val = Console.ReadLine();
int x;
for (x = 0; val[x] != ' '; x++) temp += val[x];
p = Convert.ToInt64(temp);
temp = "";
for (x = x + 1; x < val.Length; x++) temp += val[x];
n = Convert.ToInt64(temp);
long[] ara = new long[p];
long i,ans=-1;
bool b=false;
for (i = 0; i < p; i++) ara[i] = -1;
for (i = 0; i < n; i++)
{
    long y = Convert.ToInt64(Console.ReadLine());
    y = (y % p);
    if (ara[y] == -1) ara[y] = i;
    else
    {
        if (b == false)
        {
            ans = i+1;
            b = true;
        }
    }
}

Console.WriteLine(ans);