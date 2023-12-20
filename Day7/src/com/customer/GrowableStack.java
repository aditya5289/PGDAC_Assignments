package com.customer;

import java.util.Scanner;

public class GrowableStack implements Stack {
	Scanner sc = new Scanner(System.in);
	Customer[] gs = new Customer[100];
	private int count = 0;

	public void push() {
		System.out.println("Enter details: (Id,Name,Address)");
		gs[count++] = new Customer(sc.nextInt(), sc.next(), sc.next());
	}

	public void pop() {
		for (int i = 0; i < count; i++) {
			System.out.println(gs[i]);
		}
		if ((count - 1) >= 0) {
			gs[count - 1] = null;
			count--;
		} else {
			System.out.println("Stack is empty!!");
		}
	}
}