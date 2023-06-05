int r, c,k=0;
string val,temp="";
val = Console.ReadLine();
int x;
for ( x = 0; val[x] != ' '; x++) temp += val[x];
r = Convert.ToInt32(temp);
temp = " ";
for(x = x+1; x<val.Length; x++) temp += val[x];
c = Convert.ToInt32(temp);

string[] s = new string[r];
for (int i = 0; i < r; i++) s[i] = Console.ReadLine();

bool ans = true;

for (int i = 0; i<r; i++)
{
    for(int j=1; j<c; j++)
    {
        if (s[i][j] != s[i][j-1]) ans = false;
    }
    if(i != 0 && i + 1 < r)
    {
        if (s[i][0] == s[i - 1][0]) ans = false;
    }
}

if(ans) Console.WriteLine("YES");
else Console.WriteLine("NO");