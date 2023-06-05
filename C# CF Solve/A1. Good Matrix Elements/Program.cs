int n = Convert.ToInt32(Console.ReadLine());
int[,] ara = new int[n, n];
int i = 0, j = 0;
for (i = 0; i < n; i++)
{
    string val = Console.ReadLine();
    string temp = "";
    int k;
    for (k = 0; k < val.Length; k++)
    {
        if (val[k] != ' ') temp += val[k];
        else
        {
            ara[i, j] = Convert.ToInt32(temp);
            j++;
            temp = "";
        }
    }
    ara[i, j] = Convert.ToInt32(temp);
    j = 0;
}

int sum = 0;
for (i = 0, j = 0; i < n; i++, j++)
{
    sum += ara[i, j];
    ara[i, j] = 0;
}
for (i = 0, j = n - 1; i < n; i++, j--)
{
    sum += ara[i, j];
    ara[i, j] = 0;
}
for (i = n / 2, j = 0; j < n; j++)
{
    sum += ara[i, j];
    ara[i, j] = 0;
}
for (i = 0, j = n / 2; i < n; i++)
{
    sum += ara[i, j];
    ara[i, j] = 0;
}
Console.WriteLine(sum);