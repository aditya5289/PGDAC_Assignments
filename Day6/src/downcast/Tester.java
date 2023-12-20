package downcast;

public class Tester {

	public static void main(String[] args) {
	//Person p = new Person("Avi","Hongekar");
	//person p = new student
	//Student s = new Person("Avinash","Hongekar"); 
	Student s = new Student("Avi","Hongekar",10);
	//Student s = (Student)p;
	//if(s instanceof Student) s.show();
	//((Student)s).show();
	System.out.println(s.show());
	}
}
