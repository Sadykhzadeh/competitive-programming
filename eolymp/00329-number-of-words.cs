// Problem:   Number of words (eolymp 329)
// Link:      https://eolymp.com/problems/329
// Language:  C# (Mono 5.20)
// Submitted: 2019-07-26 11:25 UTC
// Verdict:   Accepted

using System;

namespace Problem329
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            string setir = Console.ReadLine();
            setir = setir.Replace("-", "");
            setir = setir.Trim();

            while (setir.Contains("  "))
            {
                setir = setir.Replace("  ", " ");
            }

            int say = setir.Split(' ').Length;
            Console.WriteLine(say);
        }
    }
}
