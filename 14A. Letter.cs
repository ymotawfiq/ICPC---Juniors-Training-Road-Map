
// problem link --> https://codeforces.com/contest/14/problem/A

public class S
{
    public static void Main(string[] args)
    {
        string s = Console.ReadLine()!;
        string[] input = s.Split(' ');
        int n = Convert.ToInt32(input[0]);
        int m = Convert.ToInt32(input[1]);
        input = new string[n];
        for (int i = 0; i < n; i++)input[i] = Console.ReadLine()!;
        
        int fj = 1000, lj = -1, fi = 1000, li = -1;
        for (int i = 0; i < n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if (input[i][j] == '*')
                {
                    if (i < fi) fi = i;
                    if (i > li) li = i;
                    if (j < fj) fj = j;
                    if (j > lj) lj = j;
                }
            }
        }
        for (int i = fi; i <= li; i++)
        {
            for(int j=fj; j<=lj; j++)Console.Write(input[i][j]);
            Console.WriteLine();
        }
    }
}
