package downcast;

public class Student extends Person {
private int roll;

public Student(String fn, String ln, int roll) {
		// TODO Auto-generated constructor stub
	super(fn,ln);
	this.roll = roll;
	}
public int show() {
	return roll;
}
}
