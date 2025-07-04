#include "Product.h"
#include <bits/stdc++.h>

using namespace std;

Product::Product(string name, double price, int quantity) : name(name), price(price), quantity(quantity) {}

string Product::getName() { return name; }
double Product::getPrice() { return price; }
int Product::getQuantity() { return quantity; }
bool Product::decreseQuantity(int val) {
	if (val > quantity) return 0;
	quantity-=val;
	return 1;
}