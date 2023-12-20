package com.app.fruits;

public class Mango extends Fruits{
	public Mango(String color, double weight, String name, boolean fresh)
	{
		super(color,weight,name,fresh);
	}
	@Override
	public String taste()
	{
		return "Sweet";
	}
	@Override
	public String toString()
	{
		return super.toString();
	}
	public void pulp() {
		System.out.println(super.getMango()+" creating pulp!");
	}

}
