package string_questions;

//Q 1 :  Solve
public class Question1 {
	public static void main(String[] args) {
		String s = new String("hello");
		String s1 = s.concat(" abc !");
		System.out.println(s);// hello
		System.out.println(s1);// hello abc !
		s = s.concat("12345");
		System.out.println(s);// hello12345
		System.out.println(s.toUpperCase());// upper cased
		System.out.println(s);// lower cased
		String s2 = s.replace('l', 't');
		System.out.println(s);// orig
		System.out.println(s2);// replaced
			s.concat("3456");//javac err
	}
}