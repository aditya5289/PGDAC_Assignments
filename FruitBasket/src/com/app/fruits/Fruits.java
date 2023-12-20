package com.app.fruits;

public class Fruits {
	private String color;
	private double weight;
	private String name;
	private boolean fresh;
	
	public Fruits(String color, double weight, String name, boolean fresh)
	{
		this.color = color;
		this.weight = weight;
		this.name = name;
		this.fresh = fresh;
	}
	public String taste()
	{
		return "No specific taste :(";
	}

	public String toString()
	{
		return "Fruit Name: "+this.name+" Colour: "+this.color+" Weight: "+this.weight;
	}
	public String getMango() {
		return "Name: "+this.name+" Colour: "+this.color;
	}
	public String getOrange() {
		return "Name: "+this.name+" Weight: "+this.weight;
	}
	public String getApple() {
		return "Name: "+this.name;
	}
	public void setStale() {
		this.fresh = false;
	}
	public boolean getFreshness() {
		return fresh;
	}
}
