
// problem link --> https://codeforces.com/contest/205/problem/A

public class S
{
    static int getMinFreq(int[] arr, int n)
    {
        int freq = 0;
        for(int i=0; i<arr.Length; i++)
        {
            if (arr[i]==n)freq++;
        }
        return freq;
    }
    public static void Main(string[] args)
    {
        int n= Convert.ToInt32(Console.ReadLine());
        string[] input = Console.ReadLine()!.Split(" ");
        int[] arr = new int[n];
        int minium = 1000000005, index = -1 ;
        for(int i=0; i<n; i++)
        {
            arr[i] = Convert.ToInt32(input[i]);
            if(arr[i]<minium)
            {
                minium = arr[i];
                index = i;
            }
        }
        int minFreq = getMinFreq(arr, minium);
        if (minFreq != 1) Console.WriteLine("Still Rozdil");
        else Console.WriteLine(index + 1);
    }
}
