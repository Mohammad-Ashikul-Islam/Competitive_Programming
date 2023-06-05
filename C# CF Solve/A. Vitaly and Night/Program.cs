using System.Globalization;

int a=0, b, c = 0;
string s = Console.ReadLine();

string temp = "";
for(int i=0; i<s.Length; i++)
{
    if (s[i] != ' ') temp += s[i];
    else
    {
        a = Convert.ToInt32(temp);
        temp = "";
    }
}
b = Convert.ToInt32(temp);

for(int i=0; i<a; i++)
{
    s = Console.ReadLine();
    for(int j=0; j<s.Length; j++)
    {
        if (s[j] == '1' || s[j + 2] == '1') c++;
        j += 2;
        if (j + 1 < s.Length && s[j + 1] == ' ') j++;
    }

}
Console.WriteLine(c);