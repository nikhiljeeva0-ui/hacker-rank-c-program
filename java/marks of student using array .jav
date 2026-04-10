import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter the number of students: ");
        int n = scan.nextInt();

        int[] marks = new int[n];
        

        for (int i = 0; i < n; i++) {
            System.out.print("Enter mark of student " + (i + 1) + ": ");
            marks[i] = scan.nextInt();
        }
        
        
        for (int i = 0; i < n; i++) {
            System.out.println(  marks[i]);
        }
    }
}
