import java.util.Scanner;

public class Bai_7 {

	public Bai_7() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("Moi nhap chieu cao cua tam giac: ");
		int n = Integer.parseInt(scan.nextLine());
		tamGiac1(n);
		tamGiac2(n);
	}
	public static void tamGiac1(int n) {
		int k = 0;
		for(int i = 1; i <= n; ++i,k=0) {
			for(int j = 1; j <= n - i; ++j) {
				System.out.print("  ");
			}while (k != 2 * i-1) {
				System.out.print("* ");
				++k;
			}
			System.out.println();
		}
	}
	public static void tamGiac2(int n) {
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n - i; j++) {
				System.out.print("  ");
			}
			for(int k = 1; k <= 2*i-1;k++) {
				if (k == 1 || k == 2 *i-1 || i == n) {
					System.out.print("* ");
				}else {
					System.out.print("  ");
				}
			}
			System.out.println("");
		}
	}
}
