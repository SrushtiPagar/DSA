import java.util.Scanner;

class Amints{
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        int n = obj.nextInt();

        int len =obj.nextInt();
        int sum =n;    //initialization
        for(int i=1;i<=len;i++)
        {
            int prev = sum-1;
            sum +=prev;   //sum=sum+prev;
        }
        System.out.println(sum);
    }
}