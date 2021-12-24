import java.util.Scanner;

public class Tinh_diem {

	public Tinh_diem() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = Integer.parseInt(scan.nextLine());
		xuatFibon(n);
		}
	public static void xuatFibon(int n) {
		for(int i = 0; i < n; i++) {
			System.out.print(fibon(i) +"\t");
		}
	}
	public static int fibon(int n) {
		int a0 = 0;
		int a1 = 1;
		int an = 1;
		if ( n < 0) {
			return -1;
		}else if (n == 0 || n == 1) {
			return n;
		}else {
			for(int i = 2; i < n; i++) {
				a0 = a1;
				a1 = an;
				an = a0 + a1;
			}
		}
		return an;
	}
}

