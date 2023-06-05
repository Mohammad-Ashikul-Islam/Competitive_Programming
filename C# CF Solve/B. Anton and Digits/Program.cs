long n = 4;
string input = Console.ReadLine();
string[] s = input.Split(' ');
long[] ara = new long[n];
for (int i = 0; i < n; i++) ara[i] = Convert.ToInt64(s[i]);
long two = ara[0], three = ara[1], five = ara[2], six = ara[3], sum = 0;
while(two >0 && five > 0 && six > 0)
{
    sum += 256;
    two--;
    five--;
    six--;
}

while (two > 0 && three > 0)
{
    sum += 32;
    two--;
    three--;
}

Console.WriteLine(sum);

