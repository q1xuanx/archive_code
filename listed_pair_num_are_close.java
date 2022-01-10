import java.util.Scanner;

public class Bai_2 {

	public Bai_2() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = importN(scan);
		int a[] = createArray(n,scan);
		listedNum(a);
	}

	public static int importN(Scanner scan) {
		int n;
		do {
			System.out.println("Moi nhap so luong phan tu > 2: ");
			n = Integer.parseInt(scan.nextLine());
		} while (n < 2);
		return n;
	}

	public static int[] createArray (int n, Scanner scan) {
		int a[] = new int[n];
		for(int i = 0; i < n; i++) {
			System.out.println("a[" + i + "]:");
			a[i] = Integer.parseInt(scan.nextLine());
		}
		return a;
	}
	public static void listedNum(int a[]) {
		int min = Math.abs(a[0] - a[1]);
		for(int i = 0; i < a.length - 1; i++) {
			for(int j = i + 1; j < a.length; j++) {
				if (Math.abs(a[i] - a[j]) < min) {
					min = Math.abs(a[i] - a[j]);
				}
			}
		}
		for(int i = 0; i < a.length - 1; i++) {
			for(int j = i + 1; j < a.length; j++) {
				if (Math.abs(a[i] - a[j]) == min) {
					System.out.println(a[i] + " " + a[j]);
				}
			}
		}
	}
}
