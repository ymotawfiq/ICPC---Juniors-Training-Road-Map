
// problem link --> https://codeforces.com/contest/580/problem/A

public class S
{
    public static void Main(string[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine());
        string s = Console.ReadLine()!;
        string[] input = s.Split(" ");
        int ans = 0, c = 1;
        for(int i=0; i<input.Length-1; i++)
        {
            if (Convert.ToInt32(input[i]) <= Convert.ToInt32(input[i + 1])) c++;
            else
            {
                ans = Math.Max(ans, c);
                c = 1;
            }
        }
        ans = Math.Max(ans, c);
        Console.WriteLine(ans);
    }
}
