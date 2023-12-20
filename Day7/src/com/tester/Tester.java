package com.tester;

import com.customer.*;
import java.util.Scanner;

public class Tester {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		FixedStack fs = new FixedStack();
		GrowableStack gs = new GrowableStack();
		boolean stackFixed = false, stackGrow = false;
		do {
			System.out.println("\n-----------Select one of the following----------" + "\n1. Fixed Stack"
					+ "\n2. Growable Stack" + "\n3. Push data" + "\n4. Pop data" + "\n5. EXIT\n");
			int choice = sc.nextInt();
			switch (choice) {
			case 1:
				if (stackGrow) {
					System.out.println("You have already selected Growable stack.");
					break;
				} else {
					stackFixed = true;
					System.out.println("Fixed stack selected");
				}
				break;
			case 2:
				if (stackFixed) {
					System.out.println("You have already selected Fixed stack.");
					break;
				} else {
					stackGrow = true;
					System.out.println("Growable stack selected");
				}
				break;
			case 3:
				if (stackFixed) {
					fs.push();
				} else if (stackGrow) {
					gs.push();
				}
				break;
			case 4:
				if (stackFixed) {
					fs.pop();
				} else if (stackGrow) {
					gs.pop();
				}
				break;
			case 5:
				System.out.println("EXIT");
				sc.close();
				System.exit(0);
				break;

			default:
				break;
			}
		} while (true);
	}
}