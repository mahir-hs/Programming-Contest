import java.io.*;
import java.util.*;

//Scanner s = new Scanner(System.in);
public class Main {

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        int x;
        while (true) {
            x = s.nextInt();
            if (x == 0) {
                break;
            }
            if (x > 100) {
                System.out.println("f91(" + x + ") = " + (x - 10));
            }
            if (x < 101) {
                System.out.println("f91(" + x + ") = " + 91);
            }
        }

    }

}
