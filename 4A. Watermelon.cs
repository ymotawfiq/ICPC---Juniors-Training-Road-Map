
// problem link --> https://codeforces.com/contest/4/problem/A

public class S
{
    
    public static void Main(string[] args)
    {
        short n = Convert.ToInt16(Console.ReadLine());
        if (n % 2 != 0)
        {
            Console.WriteLine("NO");
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if ((n - i) % 2 == 0 && i % 2 == 0)
                {
                    Console.WriteLine("YES");
                    return;
                }
            }
            Console.WriteLine("NO");
        }
        
    }
}
