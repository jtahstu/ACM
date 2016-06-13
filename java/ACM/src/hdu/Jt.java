package hdu;

import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.PrintWriter;
import java.util.Scanner;

public class Jt {
	static Scanner cin = new Scanner(new BufferedInputStream(System.in));
	static PrintWriter cout = new PrintWriter(new BufferedOutputStream(
			System.out));

	public static void main(String[] args) {
		solve();
		cin.close();
		cout.close();
	}

	static char[] ways = new char[100];
	static char[] seq = new char[100];
	static boolean flag = false;
	static int n, m, min = Integer.MAX_VALUE;

	private static boolean solve() {
		n = cin.nextInt();
		m = cin.nextInt();

		DFS(n, 0);

		System.out.println(min);

		for (int i = min - 1; i >= 0; i--) {
			System.out.print(seq[i]);
		}

		return true;
	}

	private static void DFS(int n, int count) {
		// System.out.println(count);
		if (count >= 26)
			return;
		if (n == m && count < min) {
			flag = true;
			min = count;
			seq = ways.clone();
			return;
		}
		ways[count] = 'f';
		DFS(n * 3, count + 1);
		ways[count] = 'g';
		DFS(n / 2, count + 1);

	}
}
