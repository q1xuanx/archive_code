import java.util.Scanner;

public class RandomArray {
	final static int MIN = -100;
	final static int MAX = 100;

	public RandomArray() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = nhapN(scan);
		int a[] = nhap(n);
		xuat(a);
		mangNguyen(scan,a);
	}

	public static int nhapN(Scanner scan) {
		int n;
		do {
			System.out.println("Moi nhap n: ");
			n = Integer.parseInt(scan.nextLine());
		} while (n < 0 || n % 2 != 0);
		return n;
	}

	public static int[] nhap(int n) {
		int a[] = new int[n];
		for (int i = 0; i < n; i++) {
			a[i] = MIN + (int) (Math.random() * ((MAX - MIN) + 1));
		}
		return a;
	}
	public static void xuat(int a[]) {
		for(int i = 0; i < a.length; i++) {
			System.out.print( a[i] + "\t");
		}
	}
	public static void mangNguyen(Scanner scan, int a[]) {
		System.out.println("Nhap x: ");
		int x = Integer.parseInt(scan.nextLine());
		System.out.println("Nhap y: ");
		int y = Integer.parseInt(scan.nextLine());
		for(int pt : a) {
			if (pt >= x && pt <= y) {
				System.out.print(pt + "\t");
			}
		}
	}
}
