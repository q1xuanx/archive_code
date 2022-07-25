import java.util.Scanner;

public class Bai_4 {
	final static int MIN = -1000;
	final static int MAX = 1000;

	public Bai_4() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = importN(scan);
		int a[] = createArray(n);
		printArray(a);
		System.out.println("Cac so co toan chu so le: ");
		listedOddNum(a);
	}

	public static int importN(Scanner scan) {
		int n;
		System.out.println("Moi nhap so luong phan tu : ");
		n = Integer.parseInt(scan.nextLine());
		return n;
	}

	public static int[] createArray(int n) {
		int a[] = new int[n];
		for (int i = 0; i < n; i++) {
			System.out.println("a[" + i + "]: ");
			a[i] = MIN + (int) (Math.random() * (MAX - MIN) + 1);
		}
		return a;
	}

	public static void printArray(int a[]) {
		for (int i = 0; i < a.length; i++) {
			System.out.print(a[i] + " ");
		}
	}
	public static boolean check(int n) {
		n = Math.abs(n);
		do {
			int temp = n % 10;
			if ( n % 2 == 0)
				return false;
			n /= 10;
		}while (n > 0);
		return true;
	}
	public static void listedOddNum(int a[]) {
		int dem = 0;
		for (int i = 0; i < a.length; i++) {
			if (check(a[i])) {
				System.out.println(a[i] +" ");
				dem++;
			}
		}
		if (dem == 0) {
			System.out.println("Khong co so can tim");
		}
	}
}
