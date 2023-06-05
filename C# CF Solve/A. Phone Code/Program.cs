int n = Convert.ToInt32(Console.ReadLine());
string[] s = new string[n];
for (int i = 0; i <n; i++)
{
    string s2 = Console.ReadLine();
    s[i] = s2;
}
int c = 0;
for (int j = 0; j < s[0].Length; j++)
{
    bool b = false;
    char ch = s[0][j];
    for(int i = 0; i < n; i++)
    {
        if (s[i][j] != ch) { b = true; break; }
    }
    if (b == false) c++;
    else break;
}
Console.WriteLine(c);