int n = Convert.ToInt32(Console.ReadLine());
string s = Console.ReadLine();
int[] ara = new int[n];
string temp="";
int i, j = 0;
for (i = 0; i < s.Length; i++)
{
    if (s[i] != ' ') temp += s[i];
    else
    {
        ara[j] = Convert.ToInt32(temp);
        j++;
        temp = "";
    }
}
ara[j]=Convert.ToInt32(temp);

int[] sara = new int[n];
ara.CopyTo(sara, 0);

Array.Sort(sara);
Array.Reverse(sara);
int index = 0;
for( i = 0; i < ara.Length; i++)
{
    if (ara[i] == sara[0]) index = i + 1;
}
Console.WriteLine($"{index} {sara[1]}");