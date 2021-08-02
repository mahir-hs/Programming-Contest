import java.io.*;
import java.util.*;

//Scanner s = new Scanner(System.in);
public class Main {

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        int x = s.nextInt();
        int a = 1;
        while (x != 0) {
            int ans = 0;
            int y = s.nextInt();
            while (y != 0) {
                int z = s.nextInt();
                if (z > ans) {
                    ans = z;
                }
                y--;
            }
            System.out.println("Case " + a + ": " + ans);
            a++;
            x--;

        }
        s.close();

    }
}
