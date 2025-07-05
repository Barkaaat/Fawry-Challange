#pragma once
#include "Product.h"
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <utility>


using namespace std;

class TV : public Product {
private:
	double weight;
public:
	TV(string name, double price, int quantity, double weight);
	bool isShippable() const override;
	double getWeight() const override;
};