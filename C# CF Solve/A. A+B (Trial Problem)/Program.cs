﻿long t = Convert.ToInt64(Console.ReadLine());
for(long tc = 0; tc < t; tc++)
{
    long n = 2;
    string input = Console.ReadLine();
    string[] s = input.Split(' ');
    long[] ara = new long[n];
    for (long i = 0; i < n; i++) ara[i] = Convert.ToInt64(s[i]);
    Console.WriteLine(ara[0] + ara[1]);
}