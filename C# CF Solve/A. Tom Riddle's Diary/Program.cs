int n = Convert.ToInt32(Console.ReadLine());
string[] s = new string[n];
for (int i = 0; i < s.Length; i++)
{
    s[i] = Console.ReadLine();
}

for(int i=0; i < s.Length; i++)
{
    bool b = false;
    for(int j=0; j < i; j++)
    {
        if (s[j] == s[i]) b = true;
    }
    if(b) Console.WriteLine("YES");
    else Console.WriteLine("NO");
}