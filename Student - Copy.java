/*
Implement constructor and constructor overloading.
*/
class Student {

    String name;
    int age;
    String course;

    // Default constructor
    Student() {
        name = "Not Assigned";
        age = 0;
        course = "Not Selected";
    }

    // Constructor with one parameter
    Student(String n) {
        name = n;
        age = 0;
        course = "Not Selected";
    }

    // Constructor with two parameters
    Student(String n, int a) {
        name = n;
        age = a;
        course = "Not Selected";
    }

    // Constructor with three parameters
    Student(String n, int a, String c) {
        name = n;
        age = a;
        course = c;
    }

    void display() {
        System.out.println("Name   : " + name);
        System.out.println("Age    : " + age);
        System.out.println("Course : " + course);
        System.out.println();
    }

    public static void main(String[] args) {

        
        Student s1 = new Student();                         // default constructor
        Student s2 = new Student("Ravi");                   // one parameter
        Student s3 = new Student("Anita", 20);              // two parameters
        Student s4 = new Student("Kiran", 22, "Java");      // three parameters
        
        System.out.println("Student details created with default constructor");
        s1.display();
        
        System.out.println("Student details created with parameterised constructor(String)");
        s2.display();
        
        System.out.println("Student details created with parameterised constructor(String,int)"); 
        s3.display();
       
        System.out.println("Student details created with parameterised constructor(String,int,String)");
        s4.display();
    }
}
