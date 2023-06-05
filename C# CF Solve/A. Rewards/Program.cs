long cup,medal,n;
string val, temp = "";
val = Console.ReadLine();
int x;
for (x = 0; val[x] != ' '; x++) temp += val[x];
cup = Convert.ToInt64(temp);
temp = "";
for (x = x + 1; val[x] != ' '; x++) temp += val[x];
cup += Convert.ToInt64(temp);
temp = "";
for (x = x + 1; x < val.Length; x++) temp += val[x];
cup += Convert.ToInt64(temp);

val = Console.ReadLine();
temp = "";
for (x = 0; val[x] != ' '; x++) temp += val[x];
medal = Convert.ToInt64(temp);
temp = "";
for (x = x + 1; val[x] != ' '; x++) temp += val[x];
medal += Convert.ToInt64(temp);
temp = "";
for (x = x + 1; x < val.Length; x++) temp += val[x];
medal += Convert.ToInt64(temp);

n = Convert.ToInt64(Console.ReadLine());

long z = cup/5;
if (cup % 5 != 0) z++;
n -= z;
z = medal / 10;
if(medal % 10 != 0) z++;
n -= z;
if(n<0) Console.WriteLine("NO");
else Console.WriteLine("YES");
