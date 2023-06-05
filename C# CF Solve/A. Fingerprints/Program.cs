int n, k, i;
string input = Console.ReadLine();
string[] s = input.Split(' ');
n = Convert.ToInt32(s[0]);
k = Convert.ToInt32(s[1]);
input = Console.ReadLine();
s = input.Split(' ');
int[] keys = new int[n];
for (i = 0; i < s.Length; i++) keys[i] = Convert.ToInt32(s[i]);

input = Console.ReadLine();
s = input.Split(' ');
int[] prints = new int[k];
for (i = 0; i < s.Length; i++) prints[i] = Convert.ToInt32(s[i]);
bool b = false;
for(i=0; i < keys.Length; i++)
{
    for(int j = 0; j < prints.Length; j++)
    {
        if (prints[j] == keys[i])
        {
            if (b == true) Console.Write(" ");
            else b = true;
            Console.Write(keys[i]);
            break;
        }
    }
}
