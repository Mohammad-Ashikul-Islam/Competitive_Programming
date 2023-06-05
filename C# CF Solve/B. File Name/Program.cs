int n = Convert.ToInt32(Console.ReadLine());
string s = Console.ReadLine();
int c = 0;
for(int i = 1; i < n-1; i++)
{
    if (s[i] == 'x' && s[i - 1] == 'x' && s[i + 1] == 'x') c++; 
}
Console.WriteLine(c);