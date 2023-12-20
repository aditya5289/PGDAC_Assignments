package scanner_test;
import java.util.Scanner;
public class ScannerTest {

	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number outside try block: ");
		int x = sc.nextInt();
		System.out.println(x);
		try(Scanner sc1 = new Scanner(System.in))
		{
			System.out.println("Enter number 1 : ");
			int num = sc1.nextInt();
			System.out.println("Enter number 2 : ");
			int num1 = sc1.nextInt();
			System.out.println((num/num1));
		}
		catch(Exception e){
			System.out.println(e.getMessage());
		}
		finally{
			System.out.println("in the finally");
		}
//		Scanner sc = new Scanner(System.in);
//		System.out.println("Enter number outside try block: ");
//		int x1 = sc.nextInt();
//		System.out.println(x1);
//		sc.close();
	}
	
}
