
// problem link --> https://codeforces.com/contest/373/problem/A

public class S
{
    public static void Main(string[] args)
    {
        short n = Convert.ToInt16(Console.ReadLine());
        short[] arr = new short[10];
        bool flag = true;
        for (int i = 0; i < 4; i++)
        {
            string s = Console.ReadLine()!;
            for(int j=0; j<4; j++)
            {
                if (s[j] != '.' && flag)
                {
                    short k = Convert.ToInt16(Convert.ToString(s[j]));
                    arr[k]++;
                    if (arr[k] > 2 * n)flag = false;
                }
            }
        }
        if (flag) Console.WriteLine("YES");
        else Console.WriteLine("NO");
    }
}