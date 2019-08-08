// Problem:   Silver medal (eolymp 1957)
// Link:      https://eolymp.com/problems/1957
// Language:  C# (Mono 5.20)
// Submitted: 2019-08-08 15:04 UTC
// Verdict:   Accepted

using System;

namespace Problem1957
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int[] a = new int[n];
            string setir = Console.ReadLine();
            var massiv = setir.Split(' ');
            for (int i = 0; i < n; i++) a[i] = int.Parse(massiv[i]);
            Array.Sort(a);
            for (int i = n - 1; i > 1; i--)
            {
                if (a[i] > a[i - 1])
                {
                    Console.WriteLine(a[i - 1]);
                    return;
                }
            }
        }
    }
}
