#pragma once
#include "Cart.h"
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <utility>


using namespace std;

class Customer {
private:
	string name;
	double balance;
public:
	Customer(string name, double balance);
	double getBalance();
	void checkout(Cart* cart);
};