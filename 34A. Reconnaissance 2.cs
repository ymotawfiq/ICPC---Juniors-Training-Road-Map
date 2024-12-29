
// problem link --> https://codeforces.com/contest/34/problem/A

public class S
{
    struct stPair
    {
        public int a, b;
    }
    public static void Main(string[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine());
        string s = Console.ReadLine()!;
        string[] input = s.Split(" ");
        stPair ans = new stPair();
        int min = 9999999;
        for(int i=0; i<input.Length-1; i++)
        {
            if (min > Math.Abs(Convert.ToInt32(input[i]) - Convert.ToInt32(input[i + 1])))
            {
                min = Math.Abs(Convert.ToInt32(input[i]) - Convert.ToInt32(input[i + 1]));
                ans.a = i + 1;
                ans.b = i + 2;
            }
        }
        if (min > Math.Abs(Convert.ToInt32(input[0]) - Convert.ToInt32(input[n - 1])))
        {
            ans.a = 1;
            ans.b = n;
        }
        Console.WriteLine(ans.a + " " + ans.b);
    }
}
