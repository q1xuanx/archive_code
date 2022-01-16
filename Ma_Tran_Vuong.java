import java.util.Scanner;

public class Ma_Tran_Vuong {

	public Ma_Tran_Vuong() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);
		int n = nhapN(scan);
		int a[][] = taoMang(n,scan);
		xuatMang(a,n);
		//duongCheoChinh(a,n);
		//duongCheoPhu(a,n);
		if(kiemTraDoiXung(a,n) == 0) {
			System.out.println("Ma tran khong doi xung ");
		}else {
			System.out.println("Ma tran doi xung");
		}
		
	}
	public static int nhapN(Scanner scan) {
		int n = Integer.parseInt(scan.nextLine());
		return n;
	}
	public static int[][] taoMang (int n, Scanner scan){
		int a[][] = new int[n][n];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				System.out.println("a[" + i +"][" + j +"]: ");
				a[i][j] = Integer.parseInt(scan.nextLine());
			}
		}
		return a;
	}
	public static void xuatMang(int a[][], int n) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				System.out.print(a[i][j] + "\t");
			}
			System.out.println("\n");
		}
	}
	public static void duongCheoChinh(int a[][], int n) {
		for(int i = 0; i < n; i++) {
			System.out.print(a[i][i] + "\t");
		}
	}
	public static void duongCheoPhu(int a[][], int n) {
		for(int i = 0; i < n; i++) {
			System.out.print(a[i][n-1-i] + "\t");
		}
	}
	public static int kiemTraDoiXung(int a[][], int n) {
		for(int i = 0; i < n ; i++) {
			for(int j = 0; j < n; j++) {
				if (a[i][j] != a[j][i]) {
					return 0;
				}
			}
		}
		return 1;
	}
}
