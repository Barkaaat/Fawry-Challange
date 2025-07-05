#include "Product.h"
#include "Cart.h"
#include "Customer.h"
#include "Cheese.h"
#include "TV.h"
#include "MobileScratchCard.h"
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <utility>


using namespace std;

int main() {
	Cart cart;
	Customer customer("Ahmed", 1000);
	Product* cheese = new Cheese("Cheese", 90.9, 10, 10, 1);
	cout<<cheese->getName()<<'\n';
	cout<<cheese->getQuantity()<<'\n';
	cout<<cheese->getPrice()<<'\n';
	cout<<cheese->decreseQuantity(5)<<'\n';
	
	Product* tv = new TV("TV", 1030.5, 15, 5320);
	cout<<tv->getName()<<'\n';
	cout<<tv->getQuantity()<<'\n';
	cout<<tv->getPrice()<<'\n';
	cout<<tv->decreseQuantity(5)<<'\n';
	
	Product* card = new MobileScratchCard("Card", 10.0, 15);
	cout<<card->getName()<<'\n';
	cout<<card->getQuantity()<<'\n';
	cout<<card->getPrice()<<'\n';
	cout<<card->decreseQuantity(5)<<'\n';
	
	cart.add(cheese, 10);
	cart.add(tv, 13);
	cart.add(card, 13);
	customer.checkout(&cart);
	return 0;
}