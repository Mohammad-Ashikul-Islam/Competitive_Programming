int n = Convert.ToInt32(Console.ReadLine());
string[] s = new string[n];
int[] ara = new int[6];
for (int i = 0; i < 6; i++) ara[i] = 0;
for (int i = 0; i < s.Length; i++)
{
    s[i] = Console.ReadLine();
    if (s[i] == "purple") ara[0]++;
    if (s[i] =="green") ara[1]++;
    if (s[i] == "blue") ara[2]++;
    if (s[i] == "orange") ara[3]++;
    if (s[i] == "red") ara[4]++;
    if (s[i] == "yellow") ara[5]++;
}
int c = 0;
for(int i = 0;i < ara.Length; i++)
{
    if (ara[i] == 0) c++;
}
Console.WriteLine(c);
for(int i = 0; i<ara.Length; i++)
{
    if (ara[i] > 0) continue;
    if(i == 0) Console.WriteLine("Power");
    if (i == 1) Console.WriteLine("Time");
    if (i == 2) Console.WriteLine("Space");
    if (i == 3) Console.WriteLine("Soul");
    if (i == 4) Console.WriteLine("Reality");
    if (i == 5) Console.WriteLine("Mind");
}