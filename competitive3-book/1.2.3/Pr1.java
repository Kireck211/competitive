import java.util.*;

public class Pr1 {
	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);

		double d = sc.nextDouble();
		Double rounded = Math.round(d * 1000) / 1000.0;
		String formated = String.format("%1$7s", rounded.toString());
		System.out.println("a" + formated + "a");
	}
}