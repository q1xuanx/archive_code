import java.util.Scanner;

public class MiniGame {

	public MiniGame() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		nhapSo(scan);

	}
	public static void nhapSo(Scanner scan) {
		int mystery = (int)(Math.random() * 99 + 1);
		int so;
		do {
			System.out.println("Nhap 1 so bat ki tu 1 den 100");
			so = Integer.parseInt(scan.nextLine());
			if (so > mystery) {
				System.out.println("Lon qua roi");
			}else if(so < mystery) {
				System.out.println("Be qua roi");
			}
		}while(so != mystery);
		System.out.println("Chinh xac");
	}
}
