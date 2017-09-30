import java.util.*;

public class Pr2 {
	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		double pi = Math.round(Math.PI * Math.pow(10, n)) / (1.0 * Math.pow(10, n));
		System.out.println(pi);
	}
}