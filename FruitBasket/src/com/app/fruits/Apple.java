package com.app.fruits;

public class Apple extends Fruits {
	public Apple(String color, double weight, String name, boolean fresh) {
		super(color, weight, name, fresh);
	}

	@Override
	public String taste() {
		return "Sweet and sour";
	}
	@Override
	public String toString()
	{
		return super.toString();
	}
	public void jam() {
		System.out.println(super.getApple()+" making jam!");
	}
}
