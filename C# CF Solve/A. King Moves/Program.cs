string s = Console.ReadLine();
int a = s[1]-'0';
int b = (s[0] - 'a') + 1;
int c = 0;
if (a + 1 <= 8) c++;
if (b + 1 <= 8) c++;
if (a - 1 > 0) c++;
if (b - 1 > 0) c++;
if(a+1 <= 8 && b-1 > 0) c++;
if(a+1 <= 8 && b+1 <= 8) c++;
if (a - 1 > 0 && b + 1 <= 8) c++;
if( a - 1 > 0 && b - 1 > 0) c++;

Console.WriteLine(c);
