package com.app.tester;

import com.app.fruits.*;
import java.util.Scanner;

public class TestFruits {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the basket size ");
		Fruits[] basket = new Fruits[sc.nextInt()];

		int fruitNum = 0;
		// System.out.println(basket.length);
		do {
			System.out.println("\n-------------SELECT ACTION TO PERFORM -----------");
			System.out.println("1.Add Mango" + "\n2.Add Orange" + "\n3.Add Apple" + "\n4.Display all fruits"
					+ "\n5.Display info of fresh fruits" + "\n6.Mark a fruit as stale"
					+ "\n7.Mark all sour fruits stale" + "\n8.Invoke fruit specific methods" + "\n9.EXIT");
			int choice = sc.nextInt();
			switch (choice) {
			case 1:
				if (fruitNum < basket.length) {
					System.out.println("Enter following details of Mango:" + "\ncolor,weight,name,fresh(T/F)");
					basket[fruitNum++] = new Mango(sc.next(), sc.nextDouble(), sc.next(), sc.nextBoolean());
				} else {
					System.out.println("Basket full");
				}
				break;
			case 2:
				if (fruitNum < basket.length) {
					System.out.println("Enter following details of Orange:" + "\ncolor,weight,name,fresh(T/F)");
					basket[fruitNum++] = new Orange(sc.next(), sc.nextDouble(), sc.next(), sc.nextBoolean());
				} else {
					System.out.println("Basket full");
				}
				break;
			case 3:
				if (fruitNum < basket.length) {
					System.out.println("Enter following details of Apple:" + "\ncolor,weight,name,fresh(T/F)");
					basket[fruitNum++] = new Apple(sc.next(), sc.nextDouble(), sc.next(), sc.nextBoolean());
				} else {
					System.out.println("Basket full");
				}
				break;
			case 4:
				System.out.println("Fruits in the basket are :");
				for (Fruits fruit : basket)
					System.out.println(fruit);
				break;
			case 5:
				System.out.println("Fresh fruits in the basket are :");
				for (int i = 0; i < basket.length; i++) {
					if (basket[i].getFreshness() == true)
						System.out.println(basket[i]);
				}
				break;
			case 6:
				System.out.println("Enter a index to mark the fruit as stale");
				int index = sc.nextInt();
				if (index > basket.length - 1 || index < 0)
					System.out.println("Fruit not available!");
				else
					basket[index].setStale();
				break;
			case 7:
				for (int i = 0; i < basket.length; i++) {
					// f = basket[i].taste();
					// if (f instanceof Apple || f instanceof Orange)
					if (basket[i].taste().equals("Sour"))
						basket[i].setStale();
				}
				System.out.println("All sour fruits are marked as stale");
				break;
			case 8:
				System.out.println("Enter index: ");
				index = sc.nextInt();
				Fruits f;
				if (index < basket.length && index >= 0) {
					f = basket[index];
					if (f instanceof Apple)
						((Apple) f).jam();
					else if (f instanceof Orange)
						((Orange) f).juice();
					else if (f instanceof Mango)
						((Mango) f).pulp();
				} else {
					System.out.println("Fruit not available!");
				}
				break;

			case 9:
				System.out.println("Thank you, visit again :)");
				sc.close();
				System.exit(0);
				break;
			default:
				System.out.println("Invalid input :(");
				break;
			}

		} while (true);

	}
}