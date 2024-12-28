
// problem link --> https://codeforces.com/contest/435/problem/A

public class S
{
    
    public static void Main(string[] args)
    {
        string[] input1 = Console.ReadLine()!.Split(" ");
        short n = Convert.ToInt16(input1[0]);
        short m = Convert.ToInt16(input1[1]);
        string[] input2 = Console.ReadLine()!.Split(" ");
        
        int x = 0, c = 0;
        for(int i=0; i<n; i++)
        {
            x += Convert.ToInt16(input2[i]);
            if (x >= m)
            {
                if (x > m) i--;
                c++;
                x = 0;
            }
        }
        if (x != 0) c++;
        Console.WriteLine(c);
    }
}
