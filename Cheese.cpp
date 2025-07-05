#include "Cheese.h"
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <utility>


using namespace std;

Cheese::Cheese(string name, double price, int quantity, double weight, bool expired) : Product(name, price, quantity), weight(weight), expired(expired) {}
bool Cheese::isExpired() const { return expired; }
bool Cheese::isShippable() const { return true; }
double Cheese::getWeight() const { return weight; }