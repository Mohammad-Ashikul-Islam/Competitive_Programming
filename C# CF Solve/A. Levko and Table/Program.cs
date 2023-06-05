int n = 0, k=0;
string s = Console.ReadLine();

string temp = "";
int i, j;
for (i = 0; i < s.Length; i++)
{
    if (s[i] != ' ') temp += s[i];
    else
    {
        n = Convert.ToInt32(temp);
        temp = "";
    }
}
k = Convert.ToInt32(temp);
for(i=0; i<n; i++)
{
    for(j=0; j<n; j++)
    {
        if (j != 0) Console.Write(" ");
        if(i==j) Console.Write(k);
        else Console.Write(0);
    }
    Console.WriteLine();
}