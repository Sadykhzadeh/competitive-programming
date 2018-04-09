// Problem:   Box (eolymp 697)
// Link:      https://eolymp.com/problems/697
// Language:  Java (openjdk 1.8)
// Submitted: 2018-04-09 22:17 UTC
// Verdict:   Accepted

import java.util.*;

 

public class Main

{

  public static void main(String[] args)

  {

    Scanner con = new Scanner(System.in);

    int n = con.nextInt();

    con.useLocale(new Locale("US"));

    for(int i = 0; i < n; i++)

    {

      double a = con.nextDouble();

      System.out.format(Locale.US,"%.10f\n",a/6);

    }

  }

}
