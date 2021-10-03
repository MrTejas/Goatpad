import java.util.Scanner;
public class Test
 {
    public static void main(String[] args)
     {
        Scanner sc=new Scanner (System.in);
        System.out.println ("Enter any Number");
        int n=sc.nextInt();
        boolean p=true;
        for(int x=2;x<=n/2;x++)
        {
            if(n%x==0)
            {
                p=false;
            }
        }
        if(p)
        {
            System.out.println ("Prime");
        }
        else
        {
            System.out.println ("Not Prime");
        }
        
    }
}