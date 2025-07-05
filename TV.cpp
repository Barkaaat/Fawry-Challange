#include "TV.h"
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <utility>


using namespace std;

TV::TV(string name, double price, int quantity, double weight) : Product(name, price, quantity), weight(weight) {}
bool TV::isShippable() const { return true; }
double TV::getWeight() const { return weight; }