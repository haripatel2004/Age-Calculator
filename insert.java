import java.util.Scanner;
 class insert 
{
    public static void main(String[] args) 
    {
        int n, pos, x;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter no. of elements you want in array:");
        n = s.nextInt();
        int a[] = new int[n+1];
        for(int i = 1; i < n; i++)
        {
            System.out.println("Enter the element:");
            a[i] = s.nextInt();
        }
        System.out.print("Enter the position where you want to insert element:");
        pos = s.nextInt();
        System.out.print("Enter the element you want to insert:");
        x = s.nextInt();
        for(int i =n; i >=pos; i--)
        {
            a[i] = a[i-1];
            a[i] = x;
        }
        System.out.print("After inserting:");
        for(int i = 0; i < n; i++)
        {
            System.out.println(a[i]);
        }
     
    }
}
