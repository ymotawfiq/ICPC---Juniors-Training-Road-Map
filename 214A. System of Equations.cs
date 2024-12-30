
// problem link --> https://codeforces.com/contest/214/problem/A
public class S
{
    public static void Main(string[] args)
    {
        string s = Console.ReadLine()!;
        string[] arr = s.Split(' ');
        int n = Convert.ToInt32(arr[0]);
        int m = Convert.ToInt32(arr[1]);
        int c = 0;
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=m; j++)
            {
                if (i * i + j == n && i + j * j == m) c++;
            }
        }
        Console.WriteLine(c);
    }
}
