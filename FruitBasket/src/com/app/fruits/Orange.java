package com.app.fruits;

public class Orange extends Fruits {
	public Orange(String color, double weight, String name, boolean fresh) {
		super(color, weight, name, fresh);
	}

	@Override
	public String taste() {
		return "Sour";
	}
	@Override
	public String toString()
	{
		return super.toString();
	}
	public void juice() {
		System.out.println(super.getOrange()+" extracting juice!");
	}
}
