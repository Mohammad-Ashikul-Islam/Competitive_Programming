using System.Text;

string s = Console.ReadLine();
char ch = s[0];
int i = 1;
while ( s[i] != '.')
{
    ch = s[i];
    i++;
}

if(ch=='9') Console.WriteLine($"GOTO Vasilisa.");
else
{
    StringBuilder intpart = new StringBuilder();
    i = 0;
    while (s[i] != '.')
    {
        intpart.Append(s[i]);
        i++;
    }
    i++;
    if (i < s.Length) ch = s[i];
    else ch = '0';
    if(ch >= '5') intpart[intpart.Length-1]++;
    Console.WriteLine(intpart.ToString());
}