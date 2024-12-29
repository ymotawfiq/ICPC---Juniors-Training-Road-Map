
// problem link --> https://codeforces.com/contest/535/problem/A

public class S
{
    public static void Main(string[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine());
        string[] NumbersToNine = { 
            "zero", "one", "two", "three", "four", 
            "five", "six", "seven", "eight", "nine" 
        };
        string[] NumbersToTwenty = {
            "ten","eleven", "twelve", "thirteen", "fourteen", "fifteen",
            "sixteen", "seventeen", "eighteen", "nineteen"
        };
        string[] Tens = {   
            "","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"
        };
        if (n < 10) Console.WriteLine(NumbersToNine[n]);
        else if(n>9 && n<20)Console.WriteLine(NumbersToTwenty[n-10]);
        else
        {
            int x = n / 10;
            Console.Write(Tens[x]);
            int y = n % 10;
            if(y != 0)Console.WriteLine("-" + NumbersToNine[y]);
        }
    }
}
