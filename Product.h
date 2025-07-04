#pragma once
#include <bits/stdc++.h>

using namespace std;

class Product {
private:
	string name;
	double price;
	int quantity;
public:
	Product(string name, double price, int quantity);
	string getName();
	double getPrice();
	int getQuantity();
	bool decreseQuantity(int val);
	
	virtual bool isExpired();
	virtual bool isShippable();
	virtual double getWeight();
};