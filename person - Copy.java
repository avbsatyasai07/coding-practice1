import java.util.Scanner;

class person {

    Scanner sc = new Scanner(System.in);

    // Method to take and display personal details
    void personal() {

        System.out.println("===== ENTER PERSONAL DETAILS =====");

        System.out.print("Enter Name: ");
        String name = sc.nextLine();

        System.out.print("Enter Age: ");
        int age = sc.nextInt();
        sc.nextLine(); // clear buffer

        System.out.print("Enter Gender: ");
        String gender = sc.nextLine();

        System.out.print("Enter City: ");
        String city = sc.nextLine();

        System.out.println("\n----- PERSONAL DETAILS -----");
        System.out.println("Name   : " + name);
        System.out.println("Age    : " + age);
        System.out.println("Gender : " + gender);
        System.out.println("City   : " + city);
    }

    // Method to take and display qualification details
    void qualificationDetails() {

        System.out.println("\n===== ENTER QUALIFICATION DETAILS =====");

        System.out.print("Enter Degree: ");
        String degree = sc.nextLine();

        System.out.print("Enter Branch: ");
        String branch = sc.nextLine();

        System.out.print("Enter University: ");
        String university = sc.nextLine();

        System.out.print("Enter Year of Passing: ");
        int year = sc.nextInt();

        System.out.println("\n----- QUALIFICATION DETAILS -----");
        System.out.println("Degree     : " + degree);
        System.out.println("Branch     : " + branch);
        System.out.println("University : " + university);
        System.out.println("Year       : " + year);
    }

    // main method
    public static void main(String[] args) {

        person p = new person();
        p.personal();
        p.qualificationDetails();
    }
}
