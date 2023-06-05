int n = Convert.ToInt32(Console.ReadLine());
string s = Console.ReadLine();
for(int i = 0; i < s.Length; )
{
    if (i + 1 < s.Length && s[i] == 'R' && s[i + 1] == 'U')
    {
        n--;
        i+=2;
    }
    else if (i + 1 < s.Length && s[i] == 'U' && s[i + 1] == 'R')
    {
        n--;
        i+=2;
    }
    else i++;
}
Console.WriteLine(n);