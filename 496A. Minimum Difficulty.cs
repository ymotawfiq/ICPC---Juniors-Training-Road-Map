
// problem link --> https://codeforces.com/contest/496/problem/A

public class S
{
    public static void Main(string[] args)
    {
        short n = Convert.ToInt16(Console.ReadLine());
        string s = Console.ReadLine()!;
        string[] input = s.Split(" ");
        int[] arr = new int[n];
        int m = 10000, c = -1;
        for(int i=1; i<n; i++)
        {
            short x = Convert.ToInt16(input[i]);
            short y = Convert.ToInt16(input[i-1]);
            arr[i] = x - y;
            c = Math.Max(c, arr[i]);
        }
        for(int i=2; i<n; i++)
        {
            m = Math.Max(Math.Min(m, arr[i] + arr[i-1]), c);
        }
        Console.WriteLine(m);
    }
}
