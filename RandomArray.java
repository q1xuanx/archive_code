import java.util.Scanner;

public class RandomArray {
	final static int MIN = -100;
	final static int MAX = 100;
	final static int BIG = 100000;

	public RandomArray() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = nhapN(scan);
		int a[] = nhapMang(n, scan);
		tim(a);
	}

	public static int nhapN(Scanner scan) {
		int n;
		do {
			System.out.println("Moi nhap n: ");
			n = Integer.parseInt(scan.nextLine());
		} while (n < 1);
		return n;
	}

	public static int[] nhapMang(int n, Scanner scan) {
		int a[] = new int[n];
		for (int i = 0; i < n; i++) {
			System.out.println("a[" + i + "]:");
			a[i] = Integer.parseInt(scan.nextLine());
		}
		return a;
	}

	public static int[] nhap(int n) {
		int a[] = new int[n];
		for (int i = 0; i < n; i++) {
			a[i] = MIN + (int) (Math.random() * ((MAX - MIN) + 1));
		}
		return a;
	}

	public static void xuat(int a[]) {
		for (int i = 0; i < a.length; i++) {
			System.out.print(a[i] + "\t");
		}
	}
	public static int firstMin (int a[]) {
		int viTri = -1;
		for(int i = 0; i < a.length; i++) {
			if (a[i] > 0) {
				viTri = i;
				break;
			}
		}
		return viTri;
	}
	public static int small(int a[]) {
		int min = firstMin(a);
		int viTri = -1;
		if (min == -1) {
			System.out.println("Mang khong co song duong !");
		}else {
			viTri = min;
			for(int i = min + 1; i < a.length; i++) {
				if (a[i] > 0 && a[i] < a[viTri]) {
					viTri = i;
				}
			}
		}
		return viTri;
	}

	public static void tim(int a[]) {
		int viTri = small(a);
		if (viTri == -1) {
			System.out.println("Khong co so bang so can tim o vi tri nao het !");
		} else {
			for (int i = viTri + 1; i < a.length; i++) {
				if (a[i] == a[viTri]) {
					System.out.println("Vi tri so bang so duong nho nhat trong mang: " + i);
				}
			}
		}
	}

}
