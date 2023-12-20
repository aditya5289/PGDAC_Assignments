package string_questions;

//	Q 2 : Solve
public class Question2 {
	public static void main(String[] args) {
		String s1 = new String("testing strings");
		String s2 = new String("testing strings");
		String s3 = new String("Testing Strings");
		System.out.println(s1 == s2);//f
		System.out.println(s1.equals(s2));//t
		System.out.println(s1 == s3);//f
		System.out.println(s1.equals(s3));//f
		System.out.println(s1.equalsIgnoreCase(s3));//t
	}
//	What will you use in the practical env. to chk equality of 2 strings ? == OR equals
//	: equals
}
