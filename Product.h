#pragma once
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <utility>


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
	
	virtual bool isExpired() const { return false; };
	virtual bool isShippable() const { return false; };
	virtual double getWeight() const { return 0.0; }
};