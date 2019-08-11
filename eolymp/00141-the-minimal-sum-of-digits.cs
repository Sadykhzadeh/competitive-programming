// Problem:   The Minimal Sum of Digits (eolymp 141)
// Link:      https://eolymp.com/problems/141
// Language:  C# (Mono 5.20)
// Submitted: 2019-08-11 19:58 UTC
// Verdict:   Accepted

using System;

namespace Problem141
{
    internal class Program
    {
        private static int ReqemCemi(int a)
        {
            int cem = 0;
            while (a > 0)
            {
                cem = cem + a%10;
                a = a/10;
            }
            return cem;
        }

        public static void Main(string[] args)
        {
            string setir = Console.ReadLine();
            var massiv = setir.Split(' ');
            int m = int.Parse(massiv[0]);
            int n = int.Parse(massiv[1]);
            if (m > n)
            {
                int komekci = m;
                m = n;
                n = komekci;
            }
            int az = ReqemCemi(m);
            for (int i = m + 1; i <= n; i++)
            {
                if (ReqemCemi(i) < az) az = ReqemCemi(i);
            }
            int say = 0;
            for (int i = m; i <= n; i++)
            {
                if (ReqemCemi(i) == az) say++;
            }
            Console.WriteLine(say);
        }
    }
}
