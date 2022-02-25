import java.util.Scanner;

public class Array {

	public Array() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("Moi nhap phan tu cua mang: ");
		int n = Integer.parseInt(scan.nextLine());
		int a[] = nhap(n, scan);
		lietKeGiaTri(a,scan);
	}

	public static int[] nhap(int n, Scanner scan) {
		int a[] = new int[n];
		for (int i = 0; i < n; i++) {
			System.out.println("a[" + i + "]: ");
			a[i] = Integer.parseInt(scan.nextLine());
		}
		return a;
	}

	public static void xuat(int a[]) {
		for (int i = 0; i < a.length; i++) {
			System.out.print(a[i] + " ");
		}
	}

	public static void lietKeGiaTri (int a[], Scanner scan) {
		System.out.println("Nhap gia x can tim: ");
		int x = Integer.parseInt(scan.nextLine());
		int b[] = new int [a.length]; 
		for (int i = 0; i < a.length; i++) {
			b[i] = Math.abs(a[i] - x);
		}
		int indexMax = 0;
		for(int i = 0; i < b.length; i++) {
			if (b[i] > b[indexMax]) {
				indexMax = i;
			}
		}
		System.out.println("Cac phan tu xa phan tu x la: " + x);
		for(int i = 0; i < b.length; i++) {
			if (b[i] == b[indexMax]) {
				System.out.print("(" + i + "," + a[i] + ") \t");
			}
		}
		
	}

}
