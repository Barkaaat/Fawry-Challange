#pragma once
#include "Product.h"
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

class Cart {
private:
	vector<pair<Product*, int>> items;
public:
	void add(Product* product, int quantity);
	double getSubtotal();
	void getItems();
	void getShippedItems();
	bool isEmpty();
};