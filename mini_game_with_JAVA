import java.util.Random;
import java.util.Scanner;

public class Bai_Tap {

	public Bai_Tap() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		player(scan);

	}

	public static void menu() {
		System.out.println("**TRO CHOI KEO BUA BAO**");
		System.out.println("Vui long nhap vao keo hoac bua hoac bao");
		System.out.println("1.Keo");
		System.out.println("2.Bua");
		System.out.println("3.Bao");
		System.out.println("0.Thoat");
	}

	public static void player(Scanner scan) {
		int demBot = 0;
		int demPlayer = 0;
		int n;
		do {
			menu();
			Random rd = new Random();
			int bot = rd.nextInt(3);
			// bot 0 = bua bot 1 = bao bot 3 = keo
			System.out.println("Moi ban nhap thao tac");
			n = Integer.parseInt(scan.nextLine());
			if (n == 1 && bot == 0) {
				System.out.println("Bot thang");
				demBot++;
			} else if (n == 1 && bot == 1) {
				System.out.println("Player thang");
				demPlayer++;
			} else if (n == 1 && bot == 2) {
				System.out.println("Hoa");
			} else if (n == 2 && bot == 0) {
				System.out.println("Hoa");
			} else if (n == 2 && bot == 1) {
				System.out.println("Bot thang");
				demBot++;
			} else if (n == 2 && bot == 2) {
				System.out.println("Player thang");
				demPlayer++;
			} else if (n == 3 && bot == 0) {
				System.out.println("Player thang");
				demPlayer++;
			} else if (n == 3 && bot == 1) {
				System.out.println("Hoa");
			} else if (n == 3 && bot == 2) {
				System.out.println("Bot thang");
				demBot++;
			}
		} while (n != 0);
		System.out.println("Bot thang: " + demBot);
		System.out.println("Nguoi thang: " + demPlayer);
		if (demPlayer > demBot) {
			System.out.println("Player thang nhieu nhat");
		} else if (demPlayer == demBot) {
			System.out.println("Ca hai hoa nhau");
		} else {
			System.out.println("Bot thang nhieu nhat");
		}
	}

}
