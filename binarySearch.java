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
		sapXep(a);
		int x = Integer.parseInt(scan.nextLine());
		boolean binarySearch = binarySearch(a,x);
		if (!binarySearch) {
			System.out.println("Khong co phan tu can tim !");
		}else {
			System.out.println("Co phan tu can tim !");
		}
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
	public static void sapXep(int a[]) {
		int temp;
		for(int i = 0; i < a.length - 1; i++) {
			for(int j = i + 1; j < a.length; j++) {
				if (a[i] > a[j]) {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		xuat(a);
	}
	public static boolean binarySearch(int a[], int x) {
		int trai = 0;
		int phai = a.length - 1;
		int mid;
		do {
			mid = (trai + phai) /2;
			if (a[mid] == x) {
				return true;
			}else if(a[mid] > x) {
				phai = mid - 1;
			}else {
				trai = mid + 1;
			}
		}while(trai <= phai);
		return false;
	}
}
