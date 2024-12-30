
// problem link --> https://codeforces.com/contest/501/problem/A

public class S
{
    public static void Main(string[] args)
    {
        string s = Console.ReadLine()!;
        string[] arr = s.Split(' ');
        short a = Convert.ToInt16(arr[0]);
        short b = Convert.ToInt16(arr[1]);
        short c = Convert.ToInt16(arr[2]);
        short d = Convert.ToInt16(arr[3]);
        double misha = Math.Max(3 * a / 10,  a - a / 250.0 * c);
        double vasya = Math.Max(3 * b / 10, b - b / 250.0 * d);
        if (vasya == misha) Console.WriteLine("Tie");
        else if (vasya < misha) Console.WriteLine("Misha");
        else Console.WriteLine("Vasya");
    }
}
