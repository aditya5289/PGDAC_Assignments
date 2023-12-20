package com.customer;

import java.util.Scanner;

public class FixedStack implements Stack {
	Scanner sc = new Scanner(System.in);
	Customer[] fs = new Customer[STACK_SIZE];
	private int count = 0;

	@Override
	public void push() {
		System.out.println("Enter details: (Id,Name,Address)");
		fs[count] = new Customer(sc.nextInt(), sc.next(), sc.next());
		++count;
	}

	@Override
	public void pop() {
		for (int i = 0; i < count; i++) {
			System.out.println(fs[i]);
		}
		if ((count - 1) >= 0) {
			fs[count - 1] = null;
			count--;
		} else {
			System.out.println("Stack is empty!!");
		}
	}

}