/*
Implement method overloading.
*/
class MethodOverloadingAppl {

    // Method with two integer parameters
    int add(int a, int b) {
        System.out.println("add(int, int) method is used");
        return a + b;
    }

    // Method with three integer parameters
    int add(int a, int b, int c) {
        System.out.println("add(int, int, int) method is used");
        return a + b + c;
    }

    // Method with two double parameters
    double add(double a, double b) {
        System.out.println("add(double, double) method is used");
        return a + b;
    }

    // Method with int and double parameters
    double add(int a, double b) {
        System.out.println("add(int, double) method is used");
        return a + b;
    }

    // Method with double and int parameters
    double add(double a, int b) {
        System.out.println("add(double, int) method is used");
        return a + b;
    }

    public static void main(String[] args) {

        MethodOverloadingAppl obj = new MethodOverloadingAppl();

        int sum1 = obj.add(10, 20);
        System.out.println("Returned Sum: " + sum1 + "\n");

        int sum2 = obj.add(5, 10, 15);
        System.out.println("Returned Sum: " + sum2 + "\n");

        double sum3 = obj.add(10.5, 20.3);
        System.out.println("Returned Sum: " + sum3 + "\n");

        double sum4 = obj.add(10, 20.5);
        System.out.println("Returned Sum: " + sum4 + "\n");

        double sum5 = obj.add(15.5, 10);
        System.out.println("Returned Sum: " + sum5);
    }
}

