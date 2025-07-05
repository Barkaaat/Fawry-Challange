#pragma once
#include "Product.h"
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <utility>


using namespace std;

class Cheese : public Product {
private:
	double weight;
	bool expired;
public:
	Cheese(string name, double price, int quantity, double weight, bool expired);
	bool isExpired() const override;
	bool isShippable() const override;
	double getWeight() const override;
};