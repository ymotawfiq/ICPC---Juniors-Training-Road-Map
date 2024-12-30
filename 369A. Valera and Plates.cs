
// problem link --> https://codeforces.com/contest/369/problem/A

public class S
{
    public static void Main(string[] args)
    {
        string s = Console.ReadLine()!;
        string[] input1 = s.Split(" ");
        short n = Convert.ToInt16(input1[0]);
        short m = Convert.ToInt16(input1[1]);
        short k = Convert.ToInt16(input1[2]);
        s = Console.ReadLine()!;
        input1 = s.Split(" ");
        int c = 0;
        for(int i=0; i<n; i++)
        {
            if(input1[i] == "1")
            {
                if (m > 0) m--;
                else c++;
            }
            else
            {
                if (k > 0) k--;
                else if (m > 0) m--;
                else c++;
            }
        }
        Console.WriteLine(c);
    }
}
