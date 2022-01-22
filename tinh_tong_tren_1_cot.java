import java.util.Scanner;

public class Bai_8 {
	final static short MIN = -50;
	final static short MAX = 50;

	public Bai_8() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("Moi nhap so dong: ");
		int dong = nhapN(scan);
		System.out.println("Moi nhap so cot: ");
		int cot = nhapN(scan);
		int a[][] = taoMang(dong, cot, scan);
		xuatMang(a, dong, cot);
		int x;
		do {
			System.out.println("Moi nhap dong can tinh: ");
			x = Integer.parseInt(scan.nextLine());
			if (x > dong) {
				System.out.println("Nhap sai moi nhap lai: ");
			}
		}while (x > dong);
		System.out.println(tinhTong(a,dong,cot,x)+ " ");;
	}

	public static int nhapN(Scanner scan) {
		int n = Integer.parseInt(scan.nextLine());
		return n;
	}

	public static int[][] taoMang(int dong, int cot, Scanner scan) {
		int a[][] = new int[dong][cot];
		for (int i = 0; i < dong; i++) {
			for (int j = 0; j < cot; j++) {
				System.out.println("a[" + i + "][" + j + "]: ");
				a[i][j] = MIN + (int)(Math.random() * (MAX - MIN) + 1);
			}
		}
		return a;
	}

	public static void xuatMang(int a[][], int dong, int cot) {
		for (int i = 0; i < dong; i++) {
			for (int j = 0; j < cot; j++) {
				System.out.print(a[i][j] + " ");
			}
			System.out.println("\n");
		}
	}

	public static int tinhTong(int a[][], int dong, int cot, int x) {
		int tong = 0;
		for(int i = 0; i < dong; i++) {
			tong += a[x][i];
		}
		return tong;
	}
}
