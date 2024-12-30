
// problem link --> https://codeforces.com/contest/25/problem/A

public class S
{
    public static void Main(string[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine());
        string s = Console.ReadLine()!;
        string[] arr = s.Split(' ');
        int c = 1, e = 0, le = 0, lo = 0;
        for(int i=0; i<n; i++)
        {
            c = Convert.ToInt32(arr[i]);
            if (c % 2 == 0)
            {
                e++;
                le = i;
            }
            else
            {
                e--;
                lo = i;
            }
        }
        if (e > 0) Console.WriteLine(lo+1);
        else Console.WriteLine(le+1);
    }
}
