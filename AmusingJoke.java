import java.util.Scanner;

public class AmusingJoke{
    public static void main(String[] args){
        int[] a1 = new int[26];
        int[] a2 = new int[26];
        Scanner scanner = new Scanner(System.in);
        String s1 = scanner.nextLine();
        String s2 = scanner.nextLine();
        String s3 = scanner.nextLine();
        scanner.close();
        if(s3.length() != s1.length() + s2.length()){
            System.out.println("NO");
            return;
        }
        int i, j, k;
        i = j = k = 0;
        while(k < s3.length()){
            if(i < s1.length())a1[s1.charAt(i) - 'A']++;
            if(j < s2.length())a1[s2.charAt(i) - 'A']++;
            if(k < s3.length())a2[s3.charAt(i) - 'A']++;
            i++;
            j++;
            k++;
        }
        for(i=0; i<26; i++){
            if(a1[i] != a2[i]){
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
    }
} 