#include "Customer.h"
#include "Cart.h"
#include <bits/stdc++.h>

using namespace std;

Customer::Customer(string name, double balance) : name(name), balance(balance) {}

double Customer::getBalance() { return balance; }

void Customer::checkout(Cart* cart) {
	if (cart->isEmpty()) {
		cout<<"!!!!!!!!Your cart is empty!!!!!!!!\n";
		return;
	}
	
	
	cout<<"** Checkout receipt **\n";
	cart->getItems();
	cout<<"Subtotal: "<<cart->getSubtotal()<<'\n';
	cout<<"Shipping: "<<cart->getSubtotal()/10<<'\n';
	cout<<"Amount: "<<cart->getSubtotal()+cart->getSubtotal()/10<<'\n';
}