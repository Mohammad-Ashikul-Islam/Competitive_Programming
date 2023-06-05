string s = Console.ReadLine();
bool ans = true;
if (s.Length < 5) ans = false;
bool cl=false, sl=false, d=false;
for(int i = 0; i < s.Length; i++)
{
    if (s[i] >= '0' && s[i] <= '9') d = true;
    if (s[i] >=  'A' && s[i] <= 'Z') cl = true;
    if(s[i] >= 'a' && s[i] <= 'z') sl = true;
}
if( d== false ||  cl == false || sl == false) ans = false;
if(ans) Console.WriteLine($"Correct");
else Console.WriteLine($"Too weak");